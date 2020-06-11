
#include "s2/s2latlng.h"
#include "s2/s2polyline.h"
#include "s2/s2polygon.h"
#include "wk/rcpp-io.h"

#include "wk/wkb-reader.h"
#include "wk/wkt-reader.h"
#include "wk/wkb-writer.h"
#include "wk/wkt-writer.h"
#include "wk/geometry-formatter.h"
#include "wk/geometry-handler.h"

#include "libs2-snap.h"
#include "libs2-geography.h"
#include "libs2-point-geography.h"
#include "libs2-polyline-geography.h"
#include "libs2-polygon-geography.h"
#include "libs2-geography-collection.h"
#include <Rcpp.h>
using namespace Rcpp;


class WKLibS2GeographyWriter: public WKGeometryHandler {
public:
  List s2geography;
  R_xlen_t featureId;

  WKLibS2GeographyWriter(R_xlen_t size): s2geography(size), builder(nullptr), oriented(false) {}

  void setOriented(bool oriented) {
    this->oriented = oriented;
  }

  void nextFeatureStart(size_t featureId) {
    this->builder = std::unique_ptr<LibS2GeographyBuilder>(nullptr);
    this->featureId = featureId;
  }

  void nextNull(size_t featureId) {
    this->s2geography[featureId] = R_NilValue;
  }

  void nextGeometryStart(const WKGeometryMeta& meta, uint32_t partId) {
    if (!this->builder) {
      switch (meta.geometryType) {
      case WKGeometryType::Point:
      case WKGeometryType::MultiPoint:
        this->builder = absl::make_unique<LibS2PointGeography::Builder>();
        break;
      case WKGeometryType::LineString:
      case WKGeometryType::MultiLineString:
        this->builder = absl::make_unique<LibS2PolylineGeography::Builder>();
        break;
      case WKGeometryType::Polygon:
      case WKGeometryType::MultiPolygon:
        this->builder = absl::make_unique<LibS2PolygonGeography::Builder>(this->oriented);
        break;
      case WKGeometryType::GeometryCollection:
        this->builder = absl::make_unique<LibS2GeographyCollection::Builder>(this->oriented);
        break;
      default:
        std::stringstream err;
        err << "Unknown geometry type in geography builder: " << meta.geometryType;
        Rcpp::stop(err.str());
      }
    }

    this->builder->nextGeometryStart(meta, partId);
  }

  void nextLinearRingStart(const WKGeometryMeta& meta, uint32_t size, uint32_t ringId) {
    this->builder->nextLinearRingStart(meta, size, ringId);
  }

  void nextCoordinate(const WKGeometryMeta& meta, const WKCoord& coord, uint32_t coordId) {
    this->builder->nextCoordinate(meta, coord, coordId);
  }

  void nextLinearRingEnd(const WKGeometryMeta& meta, uint32_t size, uint32_t ringId) {
    this->builder->nextLinearRingEnd(meta, size, ringId);
  }

  void nextGeometryEnd(const WKGeometryMeta& meta, uint32_t partId) {
    this->builder->nextGeometryEnd(meta, partId);
  }

  void nextFeatureEnd(size_t featureId) {
    if (this->builder) {
      std::unique_ptr<LibS2Geography> feature = builder->build();
      this->s2geography[featureId] = XPtr<LibS2Geography>(feature.release());
    }
  }

private:
  std::unique_ptr<LibS2GeographyBuilder> builder;
  bool oriented;
};

// [[Rcpp::export]]
List s2geography_from_wkb(List wkb, bool oriented) {
  WKRawVectorListProvider provider(wkb);
  WKLibS2GeographyWriter writer(wkb.size());
  writer.setOriented(oriented);
  WKBReader reader(provider);
  reader.setHandler(&writer);

  while (reader.hasNextFeature()) {
    reader.iterateFeature();
  }

  return writer.s2geography;
}

// [[Rcpp::export]]
List s2geography_from_wkt(CharacterVector wkt, bool oriented) {
  WKCharacterVectorProvider provider(wkt);
  WKLibS2GeographyWriter writer(wkt.size());
  writer.setOriented(oriented);
  WKTReader reader(provider);
  reader.setHandler(&writer);

  while (reader.hasNextFeature()) {
    reader.iterateFeature();
  }

  return writer.s2geography;
}

// [[Rcpp::export]]
List s2geography_full(LogicalVector x) { // create single geography with full polygon
  std::unique_ptr<S2Loop> l = absl::make_unique<S2Loop>(S2Loop::kFull());
  std::unique_ptr<S2Polygon> p = absl::make_unique<S2Polygon>(std::move(l));
  LibS2Geography *pg = new LibS2PolygonGeography(std::move(p));
  List ret(1);
  ret(0) = Rcpp::XPtr<LibS2Geography>(pg);
  return ret;
}

class WKLibS2GeographyReader: public WKReader {
public:

  WKLibS2GeographyReader(WKSEXPProvider& provider):
  WKReader(provider), provider(provider) {}

  void readFeature(size_t featureId) {
    this->handler->nextFeatureStart(featureId);

    if (this->provider.featureIsNull()) {
      this->handler->nextNull(featureId);
    } else {
      XPtr<LibS2Geography> geography(this->provider.feature());
      geography->Export(handler, WKReader::PART_ID_NONE);
    }

    this->handler->nextFeatureEnd(featureId);
  }

private:
  WKSEXPProvider& provider;
};

// [[Rcpp::export]]
CharacterVector s2geography_to_wkt(List s2geography, int precision, bool trim) {
  WKSEXPProvider provider(s2geography);
  WKLibS2GeographyReader reader(provider);

  WKCharacterVectorExporter exporter(reader.nFeatures());
  exporter.setRoundingPrecision(precision);
  exporter.setTrim(trim);
  WKTWriter writer(exporter);

  reader.setHandler(&writer);
  while (reader.hasNextFeature()) {
    reader.iterateFeature();
  }

  return exporter.output;
}

// [[Rcpp::export]]
List s2geography_to_wkb(List s2geography, int endian) {
  WKSEXPProvider provider(s2geography);
  WKLibS2GeographyReader reader(provider);

  WKRawVectorListExporter exporter(reader.nFeatures());
  WKBWriter writer(exporter);
  writer.setEndian(endian);

  reader.setHandler(&writer);
  while (reader.hasNextFeature()) {
    reader.iterateFeature();
  }

  return exporter.output;
}

// [[Rcpp::export]]
CharacterVector s2geography_format(List s2geography, int maxCoords) {
  WKSEXPProvider provider(s2geography);
  WKLibS2GeographyReader reader(provider);

  WKCharacterVectorExporter exporter(s2geography.size());
  WKGeometryFormatter formatter(exporter, maxCoords);

  reader.setHandler(&formatter);
  while (reader.hasNextFeature()) {
    reader.iterateFeature();
  }

  return exporter.output;
}

#include <vector>
#include <memory>
#include <sstream>
#include "s2/s2latlng.h"
#include "s2/s2polyline.h"
#include "s2/s2polygon.h"
#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
List s2polygon_from_s2polyline(List s2polyline, bool oriented, bool check) {

  SEXP item;
  S2LatLng vertex;
  std::vector<std::unique_ptr<S2Loop>> loops(s2polyline.size());

  for (R_xlen_t i = 0; i < s2polyline.size(); i++) {
    item = s2polyline[i];
    if (item == R_NilValue) {
      stop("Can't create s2polygon from missing s2polyline");
    } else {
      XPtr<S2Polyline> ptr(item);
      std::vector<S2Point> points(ptr->num_vertices());
      for (int j = 0; j < ptr->num_vertices(); j++) {
        points[j] = ptr->vertex(j).Normalize();
      }

      loops[i] = std::unique_ptr<S2Loop>(new S2Loop());
      loops[i]->Init(points);

      // Not sure if && is short-circuiting in C++...
      if (check && !loops[i]->IsValid()) {
        S2Error error;
        loops[i]->FindValidationError(&error);
        stop(error.text());
      }
    }
  }

  XPtr<S2Polygon> polygon(new S2Polygon());
  if (oriented) {
    polygon->InitOriented(std::move(loops));
  } else {
    polygon->InitNested(std::move(loops));
  }

  return  List::create(polygon);
}

// [[Rcpp::export]]
CharacterVector s2polygon_format(List s2polygon, int nVertices) {
  CharacterVector output(s2polygon.size());

  std::stringstream stream;
  SEXP item;
  S2LatLng vertex;

  for (R_xlen_t i = 0; i < s2polygon.size(); i++) {
    item = s2polygon[i];
    if (item == R_NilValue) {
      stream.str("NULL");
    } else {
      XPtr<S2Polygon> ptr(item);
      stream.str("");
      stream << "{" << ptr->num_loops() << "}";
      if (ptr->num_loops() > 0) {
        const S2Loop* loop = ptr->loop(0);

        for (int j = 0; j < std::min(nVertices, ptr->num_vertices()); j++) {
          if (j > 0) {
            stream << " ";
          }
          vertex = S2LatLng(loop->vertex(j));
          stream << "(" << vertex.lat().degrees() << ", " << vertex.lng().degrees() << ")";
        }

        if (nVertices < ptr->num_vertices()) {
          stream << "...+" << ptr->num_vertices() - nVertices;
        }
      }
    }

    output[i] = stream.str();
  }
  return output;
}

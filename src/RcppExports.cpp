// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_s2_init
void cpp_s2_init();
RcppExport SEXP _s2_cpp_s2_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cpp_s2_init();
    return R_NilValue;
END_RCPP
}
// cpp_s2_is_collection
LogicalVector cpp_s2_is_collection(List geog);
RcppExport SEXP _s2_cpp_s2_is_collection(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_is_collection(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_dimension
IntegerVector cpp_s2_dimension(List geog);
RcppExport SEXP _s2_cpp_s2_dimension(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_dimension(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_num_points
IntegerVector cpp_s2_num_points(List geog);
RcppExport SEXP _s2_cpp_s2_num_points(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_num_points(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_is_empty
LogicalVector cpp_s2_is_empty(List geog);
RcppExport SEXP _s2_cpp_s2_is_empty(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_is_empty(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_area
NumericVector cpp_s2_area(List geog);
RcppExport SEXP _s2_cpp_s2_area(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_area(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_length
NumericVector cpp_s2_length(List geog);
RcppExport SEXP _s2_cpp_s2_length(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_length(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_perimeter
NumericVector cpp_s2_perimeter(List geog);
RcppExport SEXP _s2_cpp_s2_perimeter(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_perimeter(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_x
NumericVector cpp_s2_x(List geog);
RcppExport SEXP _s2_cpp_s2_x(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_x(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_y
NumericVector cpp_s2_y(List geog);
RcppExport SEXP _s2_cpp_s2_y(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_y(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_distance
NumericVector cpp_s2_distance(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_distance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_distance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_max_distance
NumericVector cpp_s2_max_distance(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_max_distance(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_max_distance(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_bounds_cap
DataFrame cpp_s2_bounds_cap(List geog);
RcppExport SEXP _s2_cpp_s2_bounds_cap(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_bounds_cap(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_bounds_rect
DataFrame cpp_s2_bounds_rect(List geog);
RcppExport SEXP _s2_cpp_s2_bounds_rect(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_bounds_rect(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_geog_point
List cpp_s2_geog_point(NumericVector x, NumericVector y);
RcppExport SEXP _s2_cpp_s2_geog_point(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_geog_point(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_make_line
List cpp_s2_make_line(NumericVector x, NumericVector y, IntegerVector featureId);
RcppExport SEXP _s2_cpp_s2_make_line(SEXP xSEXP, SEXP ySEXP, SEXP featureIdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type featureId(featureIdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_make_line(x, y, featureId));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_make_polygon
List cpp_s2_make_polygon(NumericVector x, NumericVector y, IntegerVector featureId, IntegerVector ringId, bool oriented, bool check);
RcppExport SEXP _s2_cpp_s2_make_polygon(SEXP xSEXP, SEXP ySEXP, SEXP featureIdSEXP, SEXP ringIdSEXP, SEXP orientedSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type featureId(featureIdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ringId(ringIdSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_make_polygon(x, y, featureId, ringId, oriented, check));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_from_wkb
List s2_geography_from_wkb(List wkb, bool oriented, bool check);
RcppExport SEXP _s2_s2_geography_from_wkb(SEXP wkbSEXP, SEXP orientedSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_from_wkb(wkb, oriented, check));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_from_wkt
List s2_geography_from_wkt(CharacterVector wkt, bool oriented, bool check);
RcppExport SEXP _s2_s2_geography_from_wkt(SEXP wktSEXP, SEXP orientedSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    Rcpp::traits::input_parameter< bool >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_from_wkt(wkt, oriented, check));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_full
List s2_geography_full(LogicalVector x);
RcppExport SEXP _s2_s2_geography_full(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_full(x));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_to_wkt
CharacterVector s2_geography_to_wkt(List s2_geography, int precision, bool trim);
RcppExport SEXP _s2_s2_geography_to_wkt(SEXP s2_geographySEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_to_wkt(s2_geography, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_to_wkb
List s2_geography_to_wkb(List s2_geography, int endian);
RcppExport SEXP _s2_s2_geography_to_wkb(SEXP s2_geographySEXP, SEXP endianSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_to_wkb(s2_geography, endian));
    return rcpp_result_gen;
END_RCPP
}
// s2_geography_format
CharacterVector s2_geography_format(List s2_geography, int maxCoords, int precision, bool trim);
RcppExport SEXP _s2_s2_geography_format(SEXP s2_geographySEXP, SEXP maxCoordsSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_geography(s2_geographySEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_geography_format(s2_geography, maxCoords, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// s2_lnglat_from_numeric
List s2_lnglat_from_numeric(NumericVector lng, NumericVector lat);
RcppExport SEXP _s2_s2_lnglat_from_numeric(SEXP lngSEXP, SEXP latSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lng(lngSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_lnglat_from_numeric(lng, lat));
    return rcpp_result_gen;
END_RCPP
}
// s2_lnglat_from_s2_point
List s2_lnglat_from_s2_point(List s2_point);
RcppExport SEXP _s2_s2_lnglat_from_s2_point(SEXP s2_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_point(s2_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_lnglat_from_s2_point(s2_point));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2_lnglat
List data_frame_from_s2_lnglat(List xptr);
RcppExport SEXP _s2_data_frame_from_s2_lnglat(SEXP xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xptr(xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2_lnglat(xptr));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_closest_feature
IntegerVector cpp_s2_closest_feature(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_closest_feature(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_closest_feature(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_farthest_feature
IntegerVector cpp_s2_farthest_feature(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_farthest_feature(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_farthest_feature(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_may_intersect_matrix
List cpp_s2_may_intersect_matrix(List geog1, List geog2, int maxEdgesPerCell, int maxFeatureCells, List s2options);
RcppExport SEXP _s2_cpp_s2_may_intersect_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP maxEdgesPerCellSEXP, SEXP maxFeatureCellsSEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< int >::type maxEdgesPerCell(maxEdgesPerCellSEXP);
    Rcpp::traits::input_parameter< int >::type maxFeatureCells(maxFeatureCellsSEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_may_intersect_matrix(geog1, geog2, maxEdgesPerCell, maxFeatureCells, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_contains_matrix
List cpp_s2_contains_matrix(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_contains_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_contains_matrix(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_within_matrix
List cpp_s2_within_matrix(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_within_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_within_matrix(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects_matrix
List cpp_s2_intersects_matrix(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_intersects_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects_matrix(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_equals_matrix
List cpp_s2_equals_matrix(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_equals_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_equals_matrix(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_touches_matrix
List cpp_s2_touches_matrix(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_touches_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_touches_matrix(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_dwithin_matrix
List cpp_s2_dwithin_matrix(List geog1, List geog2, double distance);
RcppExport SEXP _s2_cpp_s2_dwithin_matrix(SEXP geog1SEXP, SEXP geog2SEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_dwithin_matrix(geog1, geog2, distance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_distance_matrix
NumericMatrix cpp_s2_distance_matrix(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_distance_matrix(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_distance_matrix(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_max_distance_matrix
NumericMatrix cpp_s2_max_distance_matrix(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_max_distance_matrix(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_max_distance_matrix(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_contains_matrix_brute_force
List cpp_s2_contains_matrix_brute_force(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_contains_matrix_brute_force(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_contains_matrix_brute_force(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_within_matrix_brute_force
List cpp_s2_within_matrix_brute_force(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_within_matrix_brute_force(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_within_matrix_brute_force(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects_matrix_brute_force
List cpp_s2_intersects_matrix_brute_force(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_intersects_matrix_brute_force(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects_matrix_brute_force(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_disjoint_matrix_brute_force
List cpp_s2_disjoint_matrix_brute_force(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_disjoint_matrix_brute_force(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_disjoint_matrix_brute_force(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_equals_matrix_brute_force
List cpp_s2_equals_matrix_brute_force(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_equals_matrix_brute_force(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_equals_matrix_brute_force(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// s2_point_from_numeric
List s2_point_from_numeric(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _s2_s2_point_from_numeric(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_point_from_numeric(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// s2_point_from_s2_lnglat
List s2_point_from_s2_lnglat(List s2_lnglat);
RcppExport SEXP _s2_s2_point_from_s2_lnglat(SEXP s2_lnglatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_lnglat(s2_lnglatSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_point_from_s2_lnglat(s2_lnglat));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2_point
List data_frame_from_s2_point(List s2_point);
RcppExport SEXP _s2_data_frame_from_s2_point(SEXP s2_pointSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_point(s2_pointSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2_point(s2_point));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects
LogicalVector cpp_s2_intersects(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_intersects(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_equals
LogicalVector cpp_s2_equals(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_equals(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_equals(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_contains
LogicalVector cpp_s2_contains(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_contains(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_contains(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_touches
LogicalVector cpp_s2_touches(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_touches(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_touches(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_dwithin
LogicalVector cpp_s2_dwithin(List geog1, List geog2, NumericVector distance);
RcppExport SEXP _s2_cpp_s2_dwithin(SEXP geog1SEXP, SEXP geog2SEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_dwithin(geog1, geog2, distance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersects_box
LogicalVector cpp_s2_intersects_box(List geog, NumericVector lng1, NumericVector lat1, NumericVector lng2, NumericVector lat2, IntegerVector detail, List s2options);
RcppExport SEXP _s2_cpp_s2_intersects_box(SEXP geogSEXP, SEXP lng1SEXP, SEXP lat1SEXP, SEXP lng2SEXP, SEXP lat2SEXP, SEXP detailSEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng1(lng1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng2(lng2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type detail(detailSEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersects_box(geog, lng1, lat1, lng2, lat2, detail, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_intersection
List cpp_s2_intersection(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_intersection(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_intersection(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_union
List cpp_s2_union(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_union(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_union(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_difference
List cpp_s2_difference(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_difference(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_difference(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_sym_difference
List cpp_s2_sym_difference(List geog1, List geog2, List s2options);
RcppExport SEXP _s2_cpp_s2_sym_difference(SEXP geog1SEXP, SEXP geog2SEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_sym_difference(geog1, geog2, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_union_agg
List cpp_s2_union_agg(List geog, List s2options, bool naRm);
RcppExport SEXP _s2_cpp_s2_union_agg(SEXP geogSEXP, SEXP s2optionsSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_union_agg(geog, s2options, naRm));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_centroid_agg
List cpp_s2_centroid_agg(List geog, bool naRm);
RcppExport SEXP _s2_cpp_s2_centroid_agg(SEXP geogSEXP, SEXP naRmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_centroid_agg(geog, naRm));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_closest_point
List cpp_s2_closest_point(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_closest_point(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_closest_point(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_minimum_clearance_line_between
List cpp_s2_minimum_clearance_line_between(List geog1, List geog2);
RcppExport SEXP _s2_cpp_s2_minimum_clearance_line_between(SEXP geog1SEXP, SEXP geog2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog1(geog1SEXP);
    Rcpp::traits::input_parameter< List >::type geog2(geog2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_minimum_clearance_line_between(geog1, geog2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_centroid
List cpp_s2_centroid(List geog);
RcppExport SEXP _s2_cpp_s2_centroid(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_centroid(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_boundary
List cpp_s2_boundary(List geog);
RcppExport SEXP _s2_cpp_s2_boundary(SEXP geogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_boundary(geog));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_rebuild
List cpp_s2_rebuild(List geog, List s2options);
RcppExport SEXP _s2_cpp_s2_rebuild(SEXP geogSEXP, SEXP s2optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< List >::type s2options(s2optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_rebuild(geog, s2options));
    return rcpp_result_gen;
END_RCPP
}
// cpp_s2_buffer_cells
List cpp_s2_buffer_cells(List geog, NumericVector distance, int maxCells, int minLevel);
RcppExport SEXP _s2_cpp_s2_buffer_cells(SEXP geogSEXP, SEXP distanceSEXP, SEXP maxCellsSEXP, SEXP minLevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type geog(geogSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< int >::type maxCells(maxCellsSEXP);
    Rcpp::traits::input_parameter< int >::type minLevel(minLevelSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_s2_buffer_cells(geog, distance, maxCells, minLevel));
    return rcpp_result_gen;
END_RCPP
}
// s2_xptr_test
List s2_xptr_test(R_xlen_t size);
RcppExport SEXP _s2_s2_xptr_test(SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< R_xlen_t >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(s2_xptr_test(size));
    return rcpp_result_gen;
END_RCPP
}
// s2_xptr_test_op
void s2_xptr_test_op(List s2_xptr_test);
RcppExport SEXP _s2_s2_xptr_test_op(SEXP s2_xptr_testSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type s2_xptr_test(s2_xptr_testSEXP);
    s2_xptr_test_op(s2_xptr_test);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_s2_cpp_s2_init", (DL_FUNC) &_s2_cpp_s2_init, 0},
    {"_s2_cpp_s2_is_collection", (DL_FUNC) &_s2_cpp_s2_is_collection, 1},
    {"_s2_cpp_s2_dimension", (DL_FUNC) &_s2_cpp_s2_dimension, 1},
    {"_s2_cpp_s2_num_points", (DL_FUNC) &_s2_cpp_s2_num_points, 1},
    {"_s2_cpp_s2_is_empty", (DL_FUNC) &_s2_cpp_s2_is_empty, 1},
    {"_s2_cpp_s2_area", (DL_FUNC) &_s2_cpp_s2_area, 1},
    {"_s2_cpp_s2_length", (DL_FUNC) &_s2_cpp_s2_length, 1},
    {"_s2_cpp_s2_perimeter", (DL_FUNC) &_s2_cpp_s2_perimeter, 1},
    {"_s2_cpp_s2_x", (DL_FUNC) &_s2_cpp_s2_x, 1},
    {"_s2_cpp_s2_y", (DL_FUNC) &_s2_cpp_s2_y, 1},
    {"_s2_cpp_s2_distance", (DL_FUNC) &_s2_cpp_s2_distance, 2},
    {"_s2_cpp_s2_max_distance", (DL_FUNC) &_s2_cpp_s2_max_distance, 2},
    {"_s2_cpp_s2_bounds_cap", (DL_FUNC) &_s2_cpp_s2_bounds_cap, 1},
    {"_s2_cpp_s2_bounds_rect", (DL_FUNC) &_s2_cpp_s2_bounds_rect, 1},
    {"_s2_cpp_s2_geog_point", (DL_FUNC) &_s2_cpp_s2_geog_point, 2},
    {"_s2_cpp_s2_make_line", (DL_FUNC) &_s2_cpp_s2_make_line, 3},
    {"_s2_cpp_s2_make_polygon", (DL_FUNC) &_s2_cpp_s2_make_polygon, 6},
    {"_s2_s2_geography_from_wkb", (DL_FUNC) &_s2_s2_geography_from_wkb, 3},
    {"_s2_s2_geography_from_wkt", (DL_FUNC) &_s2_s2_geography_from_wkt, 3},
    {"_s2_s2_geography_full", (DL_FUNC) &_s2_s2_geography_full, 1},
    {"_s2_s2_geography_to_wkt", (DL_FUNC) &_s2_s2_geography_to_wkt, 3},
    {"_s2_s2_geography_to_wkb", (DL_FUNC) &_s2_s2_geography_to_wkb, 2},
    {"_s2_s2_geography_format", (DL_FUNC) &_s2_s2_geography_format, 4},
    {"_s2_s2_lnglat_from_numeric", (DL_FUNC) &_s2_s2_lnglat_from_numeric, 2},
    {"_s2_s2_lnglat_from_s2_point", (DL_FUNC) &_s2_s2_lnglat_from_s2_point, 1},
    {"_s2_data_frame_from_s2_lnglat", (DL_FUNC) &_s2_data_frame_from_s2_lnglat, 1},
    {"_s2_cpp_s2_closest_feature", (DL_FUNC) &_s2_cpp_s2_closest_feature, 2},
    {"_s2_cpp_s2_farthest_feature", (DL_FUNC) &_s2_cpp_s2_farthest_feature, 2},
    {"_s2_cpp_s2_may_intersect_matrix", (DL_FUNC) &_s2_cpp_s2_may_intersect_matrix, 5},
    {"_s2_cpp_s2_contains_matrix", (DL_FUNC) &_s2_cpp_s2_contains_matrix, 3},
    {"_s2_cpp_s2_within_matrix", (DL_FUNC) &_s2_cpp_s2_within_matrix, 3},
    {"_s2_cpp_s2_intersects_matrix", (DL_FUNC) &_s2_cpp_s2_intersects_matrix, 3},
    {"_s2_cpp_s2_equals_matrix", (DL_FUNC) &_s2_cpp_s2_equals_matrix, 3},
    {"_s2_cpp_s2_touches_matrix", (DL_FUNC) &_s2_cpp_s2_touches_matrix, 3},
    {"_s2_cpp_s2_dwithin_matrix", (DL_FUNC) &_s2_cpp_s2_dwithin_matrix, 3},
    {"_s2_cpp_s2_distance_matrix", (DL_FUNC) &_s2_cpp_s2_distance_matrix, 2},
    {"_s2_cpp_s2_max_distance_matrix", (DL_FUNC) &_s2_cpp_s2_max_distance_matrix, 2},
    {"_s2_cpp_s2_contains_matrix_brute_force", (DL_FUNC) &_s2_cpp_s2_contains_matrix_brute_force, 3},
    {"_s2_cpp_s2_within_matrix_brute_force", (DL_FUNC) &_s2_cpp_s2_within_matrix_brute_force, 3},
    {"_s2_cpp_s2_intersects_matrix_brute_force", (DL_FUNC) &_s2_cpp_s2_intersects_matrix_brute_force, 3},
    {"_s2_cpp_s2_disjoint_matrix_brute_force", (DL_FUNC) &_s2_cpp_s2_disjoint_matrix_brute_force, 3},
    {"_s2_cpp_s2_equals_matrix_brute_force", (DL_FUNC) &_s2_cpp_s2_equals_matrix_brute_force, 3},
    {"_s2_s2_point_from_numeric", (DL_FUNC) &_s2_s2_point_from_numeric, 3},
    {"_s2_s2_point_from_s2_lnglat", (DL_FUNC) &_s2_s2_point_from_s2_lnglat, 1},
    {"_s2_data_frame_from_s2_point", (DL_FUNC) &_s2_data_frame_from_s2_point, 1},
    {"_s2_cpp_s2_intersects", (DL_FUNC) &_s2_cpp_s2_intersects, 3},
    {"_s2_cpp_s2_equals", (DL_FUNC) &_s2_cpp_s2_equals, 3},
    {"_s2_cpp_s2_contains", (DL_FUNC) &_s2_cpp_s2_contains, 3},
    {"_s2_cpp_s2_touches", (DL_FUNC) &_s2_cpp_s2_touches, 3},
    {"_s2_cpp_s2_dwithin", (DL_FUNC) &_s2_cpp_s2_dwithin, 3},
    {"_s2_cpp_s2_intersects_box", (DL_FUNC) &_s2_cpp_s2_intersects_box, 7},
    {"_s2_cpp_s2_intersection", (DL_FUNC) &_s2_cpp_s2_intersection, 3},
    {"_s2_cpp_s2_union", (DL_FUNC) &_s2_cpp_s2_union, 3},
    {"_s2_cpp_s2_difference", (DL_FUNC) &_s2_cpp_s2_difference, 3},
    {"_s2_cpp_s2_sym_difference", (DL_FUNC) &_s2_cpp_s2_sym_difference, 3},
    {"_s2_cpp_s2_union_agg", (DL_FUNC) &_s2_cpp_s2_union_agg, 3},
    {"_s2_cpp_s2_centroid_agg", (DL_FUNC) &_s2_cpp_s2_centroid_agg, 2},
    {"_s2_cpp_s2_closest_point", (DL_FUNC) &_s2_cpp_s2_closest_point, 2},
    {"_s2_cpp_s2_minimum_clearance_line_between", (DL_FUNC) &_s2_cpp_s2_minimum_clearance_line_between, 2},
    {"_s2_cpp_s2_centroid", (DL_FUNC) &_s2_cpp_s2_centroid, 1},
    {"_s2_cpp_s2_boundary", (DL_FUNC) &_s2_cpp_s2_boundary, 1},
    {"_s2_cpp_s2_rebuild", (DL_FUNC) &_s2_cpp_s2_rebuild, 2},
    {"_s2_cpp_s2_buffer_cells", (DL_FUNC) &_s2_cpp_s2_buffer_cells, 4},
    {"_s2_s2_xptr_test", (DL_FUNC) &_s2_s2_xptr_test, 1},
    {"_s2_s2_xptr_test_op", (DL_FUNC) &_s2_s2_xptr_test_op, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_s2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

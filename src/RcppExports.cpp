// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// s2BuildPolygonsLayer
List s2BuildPolygonsLayer(List ptrs, SEXP b_ptr);
RcppExport SEXP _libs2_s2BuildPolygonsLayer(SEXP ptrsSEXP, SEXP b_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b_ptr(b_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(s2BuildPolygonsLayer(ptrs, b_ptr));
    return rcpp_result_gen;
END_RCPP
}
// s2MakePoint
SEXP s2MakePoint(NumericVector pt);
RcppExport SEXP _libs2_s2MakePoint(SEXP ptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pt(ptSEXP);
    rcpp_result_gen = Rcpp::wrap(s2MakePoint(pt));
    return rcpp_result_gen;
END_RCPP
}
// s2GetPoint
List s2GetPoint(List ptrs);
RcppExport SEXP _libs2_s2GetPoint(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2GetPoint(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2MakePolyline
SEXP s2MakePolyline(NumericMatrix pts);
RcppExport SEXP _libs2_s2MakePolyline(SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2MakePolyline(pts));
    return rcpp_result_gen;
END_RCPP
}
// s2GetPolyline
List s2GetPolyline(List ptrs);
RcppExport SEXP _libs2_s2GetPolyline(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2GetPolyline(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2MakePolygon
SEXP s2MakePolygon(List mat, bool oriented);
RcppExport SEXP _libs2_s2MakePolygon(SEXP matSEXP, SEXP orientedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type oriented(orientedSEXP);
    rcpp_result_gen = Rcpp::wrap(s2MakePolygon(mat, oriented));
    return rcpp_result_gen;
END_RCPP
}
// s2GetPolygon
List s2GetPolygon(List ptrs);
RcppExport SEXP _libs2_s2GetPolygon(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2GetPolygon(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2Intersects
List s2Intersects(List x, List y, bool polygons);
RcppExport SEXP _libs2_s2Intersects(SEXP xSEXP, SEXP ySEXP, SEXP polygonsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type polygons(polygonsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2Intersects(x, y, polygons));
    return rcpp_result_gen;
END_RCPP
}
// s2IsValid
LogicalVector s2IsValid(List ptrs, bool polygons);
RcppExport SEXP _libs2_s2IsValid(SEXP ptrsSEXP, SEXP polygonsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    Rcpp::traits::input_parameter< bool >::type polygons(polygonsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2IsValid(ptrs, polygons));
    return rcpp_result_gen;
END_RCPP
}
// s2GetArea
NumericVector s2GetArea(List ptrs);
RcppExport SEXP _libs2_s2GetArea(SEXP ptrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ptrs(ptrsSEXP);
    rcpp_result_gen = Rcpp::wrap(s2GetArea(ptrs));
    return rcpp_result_gen;
END_RCPP
}
// s2latlng_from_numeric
List s2latlng_from_numeric(NumericVector lat, NumericVector lng);
RcppExport SEXP _libs2_s2latlng_from_numeric(SEXP latSEXP, SEXP lngSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lng(lngSEXP);
    rcpp_result_gen = Rcpp::wrap(s2latlng_from_numeric(lat, lng));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2latlng
List data_frame_from_s2latlng(List xptr);
RcppExport SEXP _libs2_data_frame_from_s2latlng(SEXP xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xptr(xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2latlng(xptr));
    return rcpp_result_gen;
END_RCPP
}
// s2point_from_numeric
List s2point_from_numeric(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _libs2_s2point_from_numeric(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(s2point_from_numeric(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// data_frame_from_s2point
List data_frame_from_s2point(List xptr);
RcppExport SEXP _libs2_data_frame_from_s2point(SEXP xptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type xptr(xptrSEXP);
    rcpp_result_gen = Rcpp::wrap(data_frame_from_s2point(xptr));
    return rcpp_result_gen;
END_RCPP
}
// libs2_cpp_test_indexing
void libs2_cpp_test_indexing();
RcppExport SEXP _libs2_libs2_cpp_test_indexing() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libs2_cpp_test_indexing();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_libs2_s2BuildPolygonsLayer", (DL_FUNC) &_libs2_s2BuildPolygonsLayer, 2},
    {"_libs2_s2MakePoint", (DL_FUNC) &_libs2_s2MakePoint, 1},
    {"_libs2_s2GetPoint", (DL_FUNC) &_libs2_s2GetPoint, 1},
    {"_libs2_s2MakePolyline", (DL_FUNC) &_libs2_s2MakePolyline, 1},
    {"_libs2_s2GetPolyline", (DL_FUNC) &_libs2_s2GetPolyline, 1},
    {"_libs2_s2MakePolygon", (DL_FUNC) &_libs2_s2MakePolygon, 2},
    {"_libs2_s2GetPolygon", (DL_FUNC) &_libs2_s2GetPolygon, 1},
    {"_libs2_s2Intersects", (DL_FUNC) &_libs2_s2Intersects, 3},
    {"_libs2_s2IsValid", (DL_FUNC) &_libs2_s2IsValid, 2},
    {"_libs2_s2GetArea", (DL_FUNC) &_libs2_s2GetArea, 1},
    {"_libs2_s2latlng_from_numeric", (DL_FUNC) &_libs2_s2latlng_from_numeric, 2},
    {"_libs2_data_frame_from_s2latlng", (DL_FUNC) &_libs2_data_frame_from_s2latlng, 1},
    {"_libs2_s2point_from_numeric", (DL_FUNC) &_libs2_s2point_from_numeric, 3},
    {"_libs2_data_frame_from_s2point", (DL_FUNC) &_libs2_data_frame_from_s2point, 1},
    {"_libs2_libs2_cpp_test_indexing", (DL_FUNC) &_libs2_libs2_cpp_test_indexing, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_libs2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

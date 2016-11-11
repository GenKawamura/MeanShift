// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// RcppGaussianKernel
NumericVector RcppGaussianKernel(NumericVector x);
RcppExport SEXP MeanShift_RcppGaussianKernel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppGaussianKernel(x));
    return rcpp_result_gen;
END_RCPP
}
// RcppExponentialKernel
NumericVector RcppExponentialKernel(NumericVector x);
RcppExport SEXP MeanShift_RcppExponentialKernel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppExponentialKernel(x));
    return rcpp_result_gen;
END_RCPP
}
// RcppCubicKernel
NumericVector RcppCubicKernel(NumericVector x);
RcppExport SEXP MeanShift_RcppCubicKernel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppCubicKernel(x));
    return rcpp_result_gen;
END_RCPP
}
// RcppEpanechnikovKernel
NumericVector RcppEpanechnikovKernel(NumericVector x);
RcppExport SEXP MeanShift_RcppEpanechnikovKernel(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppEpanechnikovKernel(x));
    return rcpp_result_gen;
END_RCPP
}
// RcppDistanceFunction
double RcppDistanceFunction(NumericVector x, NumericVector y);
RcppExport SEXP MeanShift_RcppDistanceFunction(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(RcppDistanceFunction(x, y));
    return rcpp_result_gen;
END_RCPP
}
// RcppBlurringMeanShiftOperator
NumericMatrix RcppBlurringMeanShiftOperator(const NumericMatrix& x, double h, String kernel);
RcppExport SEXP MeanShift_RcppBlurringMeanShiftOperator(SEXP xSEXP, SEXP hSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< String >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppBlurringMeanShiftOperator(x, h, kernel));
    return rcpp_result_gen;
END_RCPP
}
// RcppBlurringMeanShiftAlgorithm
List RcppBlurringMeanShiftAlgorithm(const NumericMatrix& x, double h, String kernel, double tol_stop, int max_iter);
RcppExport SEXP MeanShift_RcppBlurringMeanShiftAlgorithm(SEXP xSEXP, SEXP hSEXP, SEXP kernelSEXP, SEXP tol_stopSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< String >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double >::type tol_stop(tol_stopSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppBlurringMeanShiftAlgorithm(x, h, kernel, tol_stop, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// RcppMeanShiftOperator
NumericVector RcppMeanShiftOperator(NumericVector x, const NumericMatrix& points, double h, String kernel);
RcppExport SEXP MeanShift_RcppMeanShiftOperator(SEXP xSEXP, SEXP pointsSEXP, SEXP hSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< String >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppMeanShiftOperator(x, points, h, kernel));
    return rcpp_result_gen;
END_RCPP
}
// RcppMeanShiftAlgorithm
NumericVector RcppMeanShiftAlgorithm(NumericVector x, const NumericMatrix& points, double h, String kernel, double tol_stop);
RcppExport SEXP MeanShift_RcppMeanShiftAlgorithm(SEXP xSEXP, SEXP pointsSEXP, SEXP hSEXP, SEXP kernelSEXP, SEXP tol_stopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< String >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double >::type tol_stop(tol_stopSEXP);
    rcpp_result_gen = Rcpp::wrap(RcppMeanShiftAlgorithm(x, points, h, kernel, tol_stop));
    return rcpp_result_gen;
END_RCPP
}

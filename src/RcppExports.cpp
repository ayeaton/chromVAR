// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_normalized_counts
arma::sp_mat get_normalized_counts(arma::sp_mat counts, const arma::vec expectation, const arma::rowvec fragments_per_sample);
RcppExport SEXP chromVAR_get_normalized_counts(SEXP countsSEXP, SEXP expectationSEXP, SEXP fragments_per_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type expectation(expectationSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type fragments_per_sample(fragments_per_sampleSEXP);
    __result = Rcpp::wrap(get_normalized_counts(counts, expectation, fragments_per_sample));
    return __result;
END_RCPP
}
// downsample_dense
NumericMatrix downsample_dense(NumericMatrix X, double p);
RcppExport SEXP chromVAR_downsample_dense(SEXP XSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    __result = Rcpp::wrap(downsample_dense(X, p));
    return __result;
END_RCPP
}
// pwm_euclidean
double pwm_euclidean(arma::mat mat1, arma::mat mat2);
RcppExport SEXP chromVAR_pwm_euclidean(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(pwm_euclidean(mat1, mat2));
    return __result;
END_RCPP
}
// pwm_dist_single
arma::vec pwm_dist_single(arma::mat mat1, arma::mat mat2);
RcppExport SEXP chromVAR_pwm_dist_single(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(pwm_dist_single(mat1, mat2));
    return __result;
END_RCPP
}
// compute_pwm_dist
List compute_pwm_dist(List pwms);
RcppExport SEXP chromVAR_compute_pwm_dist(SEXP pwmsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type pwms(pwmsSEXP);
    __result = Rcpp::wrap(compute_pwm_dist(pwms));
    return __result;
END_RCPP
}
// col_sds
NumericVector col_sds(arma::mat& X, bool na_rm);
RcppExport SEXP chromVAR_col_sds(SEXP XSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    __result = Rcpp::wrap(col_sds(X, na_rm));
    return __result;
END_RCPP
}
// row_sds
NumericVector row_sds(arma::mat& X, bool na_rm);
RcppExport SEXP chromVAR_row_sds(SEXP XSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    __result = Rcpp::wrap(row_sds(X, na_rm));
    return __result;
END_RCPP
}
// row_sds_perm
NumericVector row_sds_perm(arma::mat& X, bool na_rm);
RcppExport SEXP chromVAR_row_sds_perm(SEXP XSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    __result = Rcpp::wrap(row_sds_perm(X, na_rm));
    return __result;
END_RCPP
}

// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// try_inv
arma::mat try_inv(arma::mat M, int nvar);
RcppExport SEXP Rphylopars_try_inv(SEXP MSEXP, SEXP nvarSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type nvar(nvarSEXP);
    __result = Rcpp::wrap(try_inv(M, nvar));
    return __result;
END_RCPP
}
// inv_subset
List inv_subset(arma::mat mat_to_inv, List subset_list);
RcppExport SEXP Rphylopars_inv_subset(SEXP mat_to_invSEXP, SEXP subset_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mat_to_inv(mat_to_invSEXP);
    Rcpp::traits::input_parameter< List >::type subset_list(subset_listSEXP);
    __result = Rcpp::wrap(inv_subset(mat_to_inv, subset_list));
    return __result;
END_RCPP
}
// mat_to_pars2
arma::vec mat_to_pars2(arma::mat M, int nvar, int diag);
RcppExport SEXP Rphylopars_mat_to_pars2(SEXP MSEXP, SEXP nvarSEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type nvar(nvarSEXP);
    Rcpp::traits::input_parameter< int >::type diag(diagSEXP);
    __result = Rcpp::wrap(mat_to_pars2(M, nvar, diag));
    return __result;
END_RCPP
}
// pars_to_mat
arma::mat pars_to_mat(arma::vec pars, int nvar, int diag, int log_chol, int mod_chol);
RcppExport SEXP Rphylopars_pars_to_mat(SEXP parsSEXP, SEXP nvarSEXP, SEXP diagSEXP, SEXP log_cholSEXP, SEXP mod_cholSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< int >::type nvar(nvarSEXP);
    Rcpp::traits::input_parameter< int >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< int >::type log_chol(log_cholSEXP);
    Rcpp::traits::input_parameter< int >::type mod_chol(mod_cholSEXP);
    __result = Rcpp::wrap(pars_to_mat(pars, nvar, diag, log_chol, mod_chol));
    return __result;
END_RCPP
}
// calc_OU_len
List calc_OU_len(arma::vec heights, arma::mat edge_mat, arma::vec des_order, int nedge, arma::mat P, arma::vec lambda, arma::mat sigma, arma::vec anc, arma::vec des, int nvar, int nspecies);
RcppExport SEXP Rphylopars_calc_OU_len(SEXP heightsSEXP, SEXP edge_matSEXP, SEXP des_orderSEXP, SEXP nedgeSEXP, SEXP PSEXP, SEXP lambdaSEXP, SEXP sigmaSEXP, SEXP ancSEXP, SEXP desSEXP, SEXP nvarSEXP, SEXP nspeciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type heights(heightsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type edge_mat(edge_matSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type des_order(des_orderSEXP);
    Rcpp::traits::input_parameter< int >::type nedge(nedgeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type anc(ancSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type des(desSEXP);
    Rcpp::traits::input_parameter< int >::type nvar(nvarSEXP);
    Rcpp::traits::input_parameter< int >::type nspecies(nspeciesSEXP);
    __result = Rcpp::wrap(calc_OU_len(heights, edge_mat, des_order, nedge, P, lambda, sigma, anc, des, nvar, nspecies));
    return __result;
END_RCPP
}
// tp
List tp(arma::mat L, arma::mat R, arma::mat Rmat, int mL, int mR, int pheno_error, arma::vec edge_vec, arma::vec edge_ind, arma::vec ind_edge, arma::vec parent_edges, arma::vec pars, unsigned int nvar, int phylocov_diag, int nind, int nob, int nspecies, int nedge, arma::vec anc, arma::vec des, int REML, List species_subset, List un_species_subset, List subset_list, List ind_list, arma::vec tip_combn, LogicalVector is_edge_ind, arma::mat fixed_mu, List OU_len, arma::mat phylocov_fixed, arma::mat phenocov_fixed, int is_phylocov_fixed, int is_phenocov_fixed, int OU_par, int ret_level, int use_LL);
RcppExport SEXP Rphylopars_tp(SEXP LSEXP, SEXP RSEXP, SEXP RmatSEXP, SEXP mLSEXP, SEXP mRSEXP, SEXP pheno_errorSEXP, SEXP edge_vecSEXP, SEXP edge_indSEXP, SEXP ind_edgeSEXP, SEXP parent_edgesSEXP, SEXP parsSEXP, SEXP nvarSEXP, SEXP phylocov_diagSEXP, SEXP nindSEXP, SEXP nobSEXP, SEXP nspeciesSEXP, SEXP nedgeSEXP, SEXP ancSEXP, SEXP desSEXP, SEXP REMLSEXP, SEXP species_subsetSEXP, SEXP un_species_subsetSEXP, SEXP subset_listSEXP, SEXP ind_listSEXP, SEXP tip_combnSEXP, SEXP is_edge_indSEXP, SEXP fixed_muSEXP, SEXP OU_lenSEXP, SEXP phylocov_fixedSEXP, SEXP phenocov_fixedSEXP, SEXP is_phylocov_fixedSEXP, SEXP is_phenocov_fixedSEXP, SEXP OU_parSEXP, SEXP ret_levelSEXP, SEXP use_LLSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Rmat(RmatSEXP);
    Rcpp::traits::input_parameter< int >::type mL(mLSEXP);
    Rcpp::traits::input_parameter< int >::type mR(mRSEXP);
    Rcpp::traits::input_parameter< int >::type pheno_error(pheno_errorSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type edge_vec(edge_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type edge_ind(edge_indSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ind_edge(ind_edgeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type parent_edges(parent_edgesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nvar(nvarSEXP);
    Rcpp::traits::input_parameter< int >::type phylocov_diag(phylocov_diagSEXP);
    Rcpp::traits::input_parameter< int >::type nind(nindSEXP);
    Rcpp::traits::input_parameter< int >::type nob(nobSEXP);
    Rcpp::traits::input_parameter< int >::type nspecies(nspeciesSEXP);
    Rcpp::traits::input_parameter< int >::type nedge(nedgeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type anc(ancSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type des(desSEXP);
    Rcpp::traits::input_parameter< int >::type REML(REMLSEXP);
    Rcpp::traits::input_parameter< List >::type species_subset(species_subsetSEXP);
    Rcpp::traits::input_parameter< List >::type un_species_subset(un_species_subsetSEXP);
    Rcpp::traits::input_parameter< List >::type subset_list(subset_listSEXP);
    Rcpp::traits::input_parameter< List >::type ind_list(ind_listSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tip_combn(tip_combnSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type is_edge_ind(is_edge_indSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type fixed_mu(fixed_muSEXP);
    Rcpp::traits::input_parameter< List >::type OU_len(OU_lenSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phylocov_fixed(phylocov_fixedSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phenocov_fixed(phenocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type is_phylocov_fixed(is_phylocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type is_phenocov_fixed(is_phenocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type OU_par(OU_parSEXP);
    Rcpp::traits::input_parameter< int >::type ret_level(ret_levelSEXP);
    Rcpp::traits::input_parameter< int >::type use_LL(use_LLSEXP);
    __result = Rcpp::wrap(tp(L, R, Rmat, mL, mR, pheno_error, edge_vec, edge_ind, ind_edge, parent_edges, pars, nvar, phylocov_diag, nind, nob, nspecies, nedge, anc, des, REML, species_subset, un_species_subset, subset_list, ind_list, tip_combn, is_edge_ind, fixed_mu, OU_len, phylocov_fixed, phenocov_fixed, is_phylocov_fixed, is_phenocov_fixed, OU_par, ret_level, use_LL));
    return __result;
END_RCPP
}
// EM_Fels2008
arma::mat EM_Fels2008(arma::mat pics, arma::vec vars, arma::mat phylocov, arma::mat phenocov, int nvar, arma::mat phylocov_fixed, arma::mat phenocov_fixed, int is_phylocov_fixed, int is_phenocov_fixed, int diag_pheno, int EM_Fels_limit, double tol, int REML, int diag_phylo);
RcppExport SEXP Rphylopars_EM_Fels2008(SEXP picsSEXP, SEXP varsSEXP, SEXP phylocovSEXP, SEXP phenocovSEXP, SEXP nvarSEXP, SEXP phylocov_fixedSEXP, SEXP phenocov_fixedSEXP, SEXP is_phylocov_fixedSEXP, SEXP is_phenocov_fixedSEXP, SEXP diag_phenoSEXP, SEXP EM_Fels_limitSEXP, SEXP tolSEXP, SEXP REMLSEXP, SEXP diag_phyloSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type pics(picsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phylocov(phylocovSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phenocov(phenocovSEXP);
    Rcpp::traits::input_parameter< int >::type nvar(nvarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phylocov_fixed(phylocov_fixedSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type phenocov_fixed(phenocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type is_phylocov_fixed(is_phylocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type is_phenocov_fixed(is_phenocov_fixedSEXP);
    Rcpp::traits::input_parameter< int >::type diag_pheno(diag_phenoSEXP);
    Rcpp::traits::input_parameter< int >::type EM_Fels_limit(EM_Fels_limitSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type REML(REMLSEXP);
    Rcpp::traits::input_parameter< int >::type diag_phylo(diag_phyloSEXP);
    __result = Rcpp::wrap(EM_Fels2008(pics, vars, phylocov, phenocov, nvar, phylocov_fixed, phenocov_fixed, is_phylocov_fixed, is_phenocov_fixed, diag_pheno, EM_Fels_limit, tol, REML, diag_phylo));
    return __result;
END_RCPP
}
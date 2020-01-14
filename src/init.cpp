// (C) 2020 Thorsten Pohlert
// GPL (>= 2)
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>
#include "dists.h"

static const R_CMethodDef CEntries[] = {
    {"dcorrR",            (DL_FUNC) &dcorrR,             5},
    {"dFriedmanR",        (DL_FUNC) &dFriedmanR,         6},
    {"dghyperR",          (DL_FUNC) &dghyperR,           6},
    {"dinvGaussR",        (DL_FUNC) &dinvGaussR,         5},
    {"dJohnsonR",         (DL_FUNC) &dJohnsonR,          8},
    {"dKendallR",         (DL_FUNC) &dKendallR,          4},
    {"dKruskalWallisR",   (DL_FUNC) &dKruskalWallisR,    7},
    {"dmaxFratioR",       (DL_FUNC) &dmaxFratioR,        5},
    {"fourthKendallR",    (DL_FUNC) &fourthKendallR,     3},
    {"JohnsonFitR",       (DL_FUNC) &JohnsonFitR,       10},
    {"JohnsonMomentFitR", (DL_FUNC) &JohnsonMomentFitR,  9},
//    {"MWC1019R",          (DL_FUNC) &MWC1019R,           4},
    {"normOrdR",          (DL_FUNC) &normOrdR,           3},
    {"pcorrR",            (DL_FUNC) &pcorrR,             5},
    {"pFriedmanR",        (DL_FUNC) &pFriedmanR,         6},
    {"pghyperR",          (DL_FUNC) &pghyperR,           6},
    {"pinvGaussR",        (DL_FUNC) &pinvGaussR,         5},
    {"pJohnsonR",         (DL_FUNC) &pJohnsonR,          8},
    {"pKendallR",         (DL_FUNC) &pKendallR,          4},
    {"pKruskalWallisR",   (DL_FUNC) &pKruskalWallisR,    7},
    {"pmaxFratioR",       (DL_FUNC) &pmaxFratioR,        5},
    {"qcorrR",            (DL_FUNC) &qcorrR,             5},
    {"qFriedmanR",        (DL_FUNC) &qFriedmanR,         6},
    {"qghyperR",          (DL_FUNC) &qghyperR,           6},
    {"qinvGaussR",        (DL_FUNC) &qinvGaussR,         5},
    {"qJohnsonR",         (DL_FUNC) &qJohnsonR,          8},
    {"qKendallR",         (DL_FUNC) &qKendallR,          4},
    {"qKruskalWallisR",   (DL_FUNC) &qKruskalWallisR,    7},
    {"qmaxFratioR",       (DL_FUNC) &qmaxFratioR,        5},
    {"rcorrR",            (DL_FUNC) &rcorrR,             5},
    {"rFriedmanR",        (DL_FUNC) &rFriedmanR,         6},
    {"rghyperR",          (DL_FUNC) &rghyperR,           6},
    {"rinvGaussR",        (DL_FUNC) &rinvGaussR,         5},
    {"rJohnsonR",         (DL_FUNC) &rJohnsonR,          8},
    {"rKendallR",         (DL_FUNC) &rKendallR,          4},
    {"rKruskalWallisR",   (DL_FUNC) &rKruskalWallisR,    7},
    {"rmaxFratioR",       (DL_FUNC) &rmaxFratioR,        5},
    {"scorrR",            (DL_FUNC) &scorrR,             9},
    {"sFriedmanR",        (DL_FUNC) &sFriedmanR,        10},
    {"sghyperR",          (DL_FUNC) &sghyperR,          10},
    {"sJohnsonR",         (DL_FUNC) &sJohnsonR,         12},
    {"sKruskalWallisR",   (DL_FUNC) &sKruskalWallisR,    9},
    {"smaxFratioR",       (DL_FUNC) &smaxFratioR,        9},
    {"tghyperR",          (DL_FUNC) &tghyperR,           4},
    {"ucorrR",            (DL_FUNC) &ucorrR,             5},
    {"uFriedmanR",        (DL_FUNC) &uFriedmanR,         6},
    {"ughyperR",          (DL_FUNC) &ughyperR,           6},
    {"uinvGaussR",        (DL_FUNC) &uinvGaussR,         5},
    {"uJohnsonR",         (DL_FUNC) &uJohnsonR,          8},
    {"uKendallR",         (DL_FUNC) &uKendallR,          4},
    {"uKruskalWallisR",   (DL_FUNC) &uKruskalWallisR,    7},
    {"umaxFratioR",       (DL_FUNC) &umaxFratioR,        5},
//    {"ziggR",             (DL_FUNC) &ziggR,              5},
    {NULL, NULL, 0}
};

extern "C" {
void R_init_SuppDists(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    R_forceSymbols(dll, TRUE);
}
}

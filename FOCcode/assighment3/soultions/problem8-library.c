#include "problem8-library.h"

double findTerm(double x_34563ETY32, double xj_34563ETY32, double xk_34563ETY32) {
    return (x_34563ETY32 - xk_34563ETY32) / (xj_34563ETY32 - xk_34563ETY32);
}

double findAllPointTerms(double x_34563ETY32, int numPoints_34563ETY32, double pointsX_34563ETY32[], double pointsY_34563ETY32[], int j_34563ETY32) {
    double result_34563ETY32 = 1.0;

    for (int i_34563ETY32 = 0; i_34563ETY32 < numPoints_34563ETY32; ++i_34563ETY32) {
        if (i_34563ETY32 != j_34563ETY32) {
            result_34563ETY32 *= findTerm(x_34563ETY32, pointsX_34563ETY32[j_34563ETY32], pointsX_34563ETY32[i_34563ETY32]);
        }
    }

    return result_34563ETY32 * pointsY_34563ETY32[j_34563ETY32];
}

double findY(double x_34563ETY32, int numPoints_34563ETY32, double pointsX_34563ETY32[], double pointsY_34563ETY32[]) {
    double sum_34563ETY32 = 0.0;

    for (int j_34563ETY32 = 0; j_34563ETY32 < numPoints_34563ETY32; ++j_34563ETY32) {
        sum_34563ETY32 += findAllPointTerms(x_34563ETY32, numPoints_34563ETY32, pointsX_34563ETY32, pointsY_34563ETY32, j_34563ETY32);
    }

    return sum_34563ETY32;
}

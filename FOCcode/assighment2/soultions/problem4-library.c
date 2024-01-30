#include <stdio.h>
#include <math.h>
#include "problem4-library.h"

void readArray(int size, double array[]) {
    for (int i = 0; i < size; ++i) {
        scanf("%lf", &array[i]);
    }
}

double dotProduct(int size, double vectorV[], double vectorW[]) {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += vectorV[i] * vectorW[i];
    }
    return result;
}

double magnitude(int size, double array[]) {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += pow(array[i], 2);
    }
    return sqrt(result);
}

double radiansToDegrees(double radians) {
    return radians * 180.0 / M_PI;
}

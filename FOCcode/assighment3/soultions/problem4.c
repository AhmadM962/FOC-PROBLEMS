// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include <math.h>
#include "problem4-library.h"

int main() {
    int size;
    scanf("%d", &size);
    double vectorV[size], vectorW[size];

    // read the first vector
    readArray(size, vectorV);

    printf("Vector V has the values:\n");
    for (int i = 0; i < size; ++i) {
        if (i != 0)
            printf(" ");
        printf("%.2lf", vectorV[i]);
    }
    printf("\n");

    // read the second vector
    readArray(size, vectorW);

    printf("Vector W has the values:\n");
    for (int i = 0; i < size; ++i) {
        if (i != 0)
            printf(" ");
        printf("%.2lf", vectorW[i]);
    }
    printf("\n");

    double dotProductResult = dotProduct(size, vectorV, vectorW);
    printf("The dot product is: %.2lf\n", dotProductResult);

    double magnitudeV = magnitude(size, vectorV);
    printf("The magnitude of V is: %.2lf\n", magnitudeV);

    double magnitudeW = magnitude(size, vectorW);
    printf("The magnitude of W is: %.2lf\n", magnitudeW);

    double cosineTheta = dotProductResult / (magnitudeV * magnitudeW);
    printf("The cosine of Theta is: %.10lf\n", cosineTheta);

    double theta = acos(cosineTheta);
    printf("Theta in radians is: %.2lf\n", theta);

    double thetaDegrees = radiansToDegrees(theta);
    printf("Theta in degrees is: %.2lf\n", thetaDegrees);

    return 0;
}
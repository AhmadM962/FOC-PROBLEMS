#include <stdio.h>
#include <math.h>
#include "problem8-library.h"

double convertDegreesToRadians(double degrees) {
    return degrees * 3.14 / 180.0;
}

int main() {
    double inputAngleDegrees;
    int numberOfTerms;
    
    scanf("%lf %d", &inputAngleDegrees, &numberOfTerms);

    double inputAngleRadians = convertDegreesToRadians(inputAngleDegrees);

    double sineResult = 0.0;

    for (int n = 0; n < numberOfTerms; ++n) {
        double currentTerm = pow(-1, n) * pow(inputAngleRadians, (2 * n) + 1) / factorial((2 * n) + 1);
        sineResult += currentTerm;
    }

    printf("%.12lf\n", sineResult);

    return 0;
}

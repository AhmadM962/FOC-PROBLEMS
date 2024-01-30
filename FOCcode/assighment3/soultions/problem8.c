// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include "problem8-library.h"

int main() {
    int numKnownPoints;
    scanf("%d", &numKnownPoints);
    double pointsX[numKnownPoints], pointsY[numKnownPoints];
    for (int i = 0; i < numKnownPoints; ++i) {
        scanf("%lf %lf", &pointsX[i], &pointsY[i]);
    }

    int numNewPoints;
    scanf("%d", &numNewPoints);
    for (int i = 0; i < numNewPoints; ++i) {
        double newPointX;
        scanf("%lf", &newPointX);

        // testing the findTerm function
        double findTermResult = findTerm(newPointX, pointsX[0], pointsX[1]);
        printf("The value of findTerm for new point %.4lf using points 0 and 1 is: %.4lf\n", newPointX, findTermResult);
        findTermResult = findTerm(newPointX, pointsX[0], pointsX[2]);
        printf("The value of findTerm for new point %.4lf using points 0 and 2 is: %.4lf\n", newPointX, findTermResult);

        // testing the findAllPointTerms function
        double findAllPointTermsResult = findAllPointTerms(newPointX, numKnownPoints, pointsX, pointsY, 0);
        printf("The value of findAllPointTerms for new point %.4lf using point 0 is: %.4lf\n", newPointX, findAllPointTermsResult);
        findAllPointTermsResult = findAllPointTerms(newPointX, numKnownPoints, pointsX, pointsY, 1);
        printf("The value of findAllPointTerms for new point %.4lf using point 1 is: %.4lf\n", newPointX, findAllPointTermsResult);

        // testing the findY function
        double findYResult = findY(newPointX, numKnownPoints, pointsX, pointsY);
        printf("The value of findY for new point %.4lf using all points is: %.8lf\n", newPointX, findYResult);
    }
    return 0;
}
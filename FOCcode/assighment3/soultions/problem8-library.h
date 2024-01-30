// DO NOT MODIFY THIS FILE
// Header file for the library to use in Problem 8

/*
    Finds the result of one term from the approximation equation
        x:  The value we want to approximate a y for
        xj: The x value of a point we already know
        xk:  The x value of a different point we already know

    1. Calculates (x - xk) / (xj - xk) and returns it
*/
double findTerm(double x, double xj, double xk);

/*
    Finds the result of all terms from the approximation equation for one known point
        x:         The value we want to approximate a y for
        numPoints: The number of points we already know
        pointsX:   The x values of the points we already know
        pointsY:   The y values of the points we already know
        j:         The index of a point in the `pointsX` and `pointsY` arrays that is currently used

    1. Calls the function findTerm for all the points in the arrays (except point `j`)
    2. Multiplies all the returned values from findTerm
    3. Multiplies the product from point 2 with the y value of the point `j`
    4. Returns the result
*/
double findAllPointTerms(double x, int numPoints, double pointsX[], double pointsY[], int j);

/*
    Finds the result of all terms from the approximation equation for all known points to approximate the y value for a new x
        x:         The value we want to approximate a y for
        numPoints: The number of points we already know
        pointsX:   The x values of the points we already know
        pointsY:   The y values of the points we already know

        The two arrays together are used to represent the points. For example, the first point's x is pointsX[0], and its y is pointsY[0] 

    1. Calls the function findAllPointTerms for all the points in the arrays, it passes j to findAllPointTerms to specify the current point
    2. Returns the sum of all the returned values from findAllPointTerms
*/
double findY(double x, int numPoints, double pointsX[], double pointsY[]);

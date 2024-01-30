// DO NOT MODIFY THIS FILE
// Header file for the library to use in Problem 7

/*
    Searches for ONE occurrence of a value in the array starting from some index, and replaces it with another value
        arr: The array of numbers to search
        size: The number of elements in the array `arr`
        start: The index to start searching from
        toFind: The value to search for
        replaceWith: The value to replace `toFind` with

    Returns the index of the first occurrence of `toFind` in `arr` that comes at or after `start`,
    or returns -1 if `toFind` is not in `arr`

    Example of usage:
        int values[7] = { 12, 13, 14, 13, 16, 17, 18 };
        replace(values, 7, 0, 13, 20) // returns 1 and the array becomes [12, 20, 14, 13, 16, 17, 18]
        
        int values2[7] = { 12, 13, 14, 13, 16, 17, 18 };
        replace(values2, 7, 4, 13, 20) // returns -1 and the array does not change
*/
int replace(int arr[], int size, int start, int toFind, int replaceWith);
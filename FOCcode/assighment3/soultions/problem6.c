// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include "problem6-library.h"

int main() {
    // read the first array
    int size1;
    scanf("%d", &size1);
    int array1[size1];
    
    for (int i = 0; i < size1; ++i)
        scanf("%d", &array1[i]);

    // read the second array
    int size2;
    scanf("%d", &size2);
    int array2[size2];
    
    for (int i = 0; i < size2; ++i)
        scanf("%d", &array2[i]);

    // test the findFreq function
    int tempFreqArray[1001] = {};
    findFreq(tempFreqArray, size1, array1);

    printf("The frequencies of the elements of array 1 are:\n");
    for (int i = 0; i < size1; ++i) {
        if (i != 0)
            printf(", ");
        printf("%d => %d time", array1[i], tempFreqArray[array1[i]]);
        if (tempFreqArray[array1[i]] > 1)
            printf("s");
    }
    printf("\n");

    printf("The elements that appear in both arrays are:\n");
    findIntersection(size1, array1, size2, array2);

    return 0;
}
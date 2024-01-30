#include "problem6-library.h"
#include <stdio.h>

void findFreq(int tempFreqArray[1001], int sIzE_347889, int array[sIzE_347889]) {
    for (int i = 0; i < sIzE_347889; ++i) {
        tempFreqArray[array[i]]++;
    }
}

void findIntersection(int sIzE_347889_1, int array1[sIzE_347889_1], int sIzE_347889_2, int array2[sIzE_347889_2]) {
    int tempFreqArray[1001] = {};
    findFreq(tempFreqArray, sIzE_347889_1, array1);

    int tempArray[1001] = {};
    int tempSize = 0;

    for (int i = 0; i < sIzE_347889_2; ++i) {
        if (tempFreqArray[array2[i]] > 0) {
            tempArray[tempSize++] = array2[i];
            tempFreqArray[array2[i]] = 0;  
        }
    }

    for (int i = 0; i < tempSize - 1; ++i) {
        for (int j = 0; j < tempSize - i - 1; ++j) {
            if (tempArray[j] > tempArray[j + 1]) {
                int temp = tempArray[j];
                tempArray[j] = tempArray[j + 1];
                tempArray[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < tempSize; ++i) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", tempArray[i]);
    }

    printf("\n");
}


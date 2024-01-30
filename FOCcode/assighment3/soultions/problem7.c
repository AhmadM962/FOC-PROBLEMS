// DO NOT MODIFY THIS FILE

#include <stdio.h>
#include "problem7-library.h"

int main() {
    int count;
    scanf("%d", &count);
    
    int numbers[count];
    
    // read the elements
    for (int i = 0; i < count; ++i)
        scanf("%d", &numbers[i]);

    int toFind, replaceWith;
    scanf("%d %d", &toFind, &replaceWith);

    int start = 0;
    // replace all occurrences of toFind with replaceWith
    while (start != -1) {
        start = replace(numbers, count, start, toFind, replaceWith);
        printf("Returned index is: %d\n", start);
    }

    // print the elements after replacing
    for (int i = 0; i < count; ++i) {
        if (i != 0)
            printf(" ");
        printf("%d", numbers[i]);
    }
    printf("\n");

    return 0;
}
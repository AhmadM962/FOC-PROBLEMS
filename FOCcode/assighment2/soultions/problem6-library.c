// DO NOT MODIFY THIS FILE
// Library to use in Problem 6

#include <stdio.h>

void drawRow(int numSpacesBefore, int numCharacters, char character) {
    for (int i = 0; i < numSpacesBefore; ++i)
        printf(" ");

    for (int i = 0; i < numCharacters; ++i)
        printf("%c", character);

    printf("\n");
}
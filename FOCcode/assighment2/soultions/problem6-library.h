// DO NOT MODIFY THIS FILE
// Header file for the library to use in Problem 6

/*
    Draws a row of characters, accepts 3 parameters:
        numSpacesBefore: Number of spaces to print at the beginning of the line
        numCharacters: The number of times to print the "character" parameter
        character: The character to be printed "numCharacters" times

    Does not return anything.

    Example of usage:
        drawRow(5, 3, '?')
        will print "     ???" without the quotations.
    
    You can use this function directly in your main function in problem6.c because this file is included in problem6.c.
*/
void drawRow(int numSpacesBefore, int numCharacters, char character);
//king
#include <stdio.h>

int main() {
    char input_charFormUser;

    scanf("%c", &input_charFormUser);

    if (input_charFormUser == '\n') {
        printf("The character %c is the new line character", input_charFormUser);
    } else if (input_charFormUser == '\t') {
        printf("The character %c is the tab character", input_charFormUser);
    } else if (input_charFormUser == ' ') {
        printf("The character %c is the space character", input_charFormUser);
    } else if (input_charFormUser >= 'a' && input_charFormUser <= 'z') {
        printf("The character %c is a lowercase English character", input_charFormUser);
    } else if (input_charFormUser >= 'A' && input_charFormUser <= 'Z') {
        printf("The character %c is an uppercase English character", input_charFormUser);
    } else if (input_charFormUser >= '0' && input_charFormUser <= '9') {
        printf("The character %c is a character digit", input_charFormUser);
    } else {
        printf("The character %c is a special character", input_charFormUser);
    }

    return 0;
}


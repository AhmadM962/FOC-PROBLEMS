#include <stdio.h>

int main() {
    // accept secret for cipher
    int secret;
    scanf("%d", &secret);

    // accept first letter of the text outside the loop
    char letter;
    scanf(" %c", &letter);

    // as long as the letter is not a new line
    while (letter != '\n') {
        if (letter >= 'A' && letter <= 'Z') {
            char newLetter = (letter - 'A' + secret) % 26 + 'A';//any upper case letter substract A from it will make it a alphabet number for example 65 - 65 is 0 
            // then i add the secret number if its 2 the letter will be 0+2=2 , by using 26 i make sure the value between () is int the range of 0 to 25 >> 2%26==2 
            //then i add the value of A ascii number so its now 2+65=67 which is C
            
            // print the new encrypted letter
            printf("%c", newLetter);
        }
        else if (letter >= 'a' && letter <= 'z') {
            char newLetter = (letter - 'a' + secret) % 26 + 'a';
            //if i want to decrypte i will use : (letter - 'a' - secret +26"to make sure its postive") % 26 + 'a'
            printf("%c", newLetter);
        }
        else {
            printf("%c", letter);
        }

        // scan the next letter
        scanf("%c", &letter);
    }

    return 0;
}
/*
this modified code have beter logice to handel apper case letters and 
lower case letters by converting the ascii value to a alphabet value starting from 0 ending with 26
and it handels the  spaces, and punctuation marks with better logic by printing it without encryption  
for more details there is a comment beside the statments of code.

*/

#include <stdio.h>
#include <string.h>

void deleteVowels_FOC_Assignment4_Ahmad(char str[]) {
    int i, j;

    for (i = 0; str[i] != '\0'; ++i) {
        while (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
}

void removeNewline_FOC_Assignment4_Ahmad(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;  
        }
    }
}

int main() {
    char input_FOC_Assignment4_Ahmad[100];

    fgets(input_FOC_Assignment4_Ahmad, sizeof(input_FOC_Assignment4_Ahmad), stdin);

    removeNewline_FOC_Assignment4_Ahmad(input_FOC_Assignment4_Ahmad);

    deleteVowels_FOC_Assignment4_Ahmad(input_FOC_Assignment4_Ahmad);

    printf("Output: %s\n", input_FOC_Assignment4_Ahmad);

    return 0;
}
/*
another soultion that does not change the index but works, please see it 
#include <stdio.h>

int main()
{
    char userinput[100];
    int size=sizeof(userinput);
    fgets(userinput,size,stdin);
    for(int i=0;i<size;i++){
        if(userinput[i]=='A'||userinput[i]=='a'||userinput[i]=='E'||userinput[i]=='e'||userinput[i]=='O'||userinput[i]=='o'||userinput[i]=='U'||userinput[i]=='u'||userinput[i]=='I'||userinput[i]=='i'){
        
            userinput[i]==userinput[i-1];
        }else{
            userinput[i]==userinput[i];
            printf("%c",userinput[i]);
            
        }
    }

    return 0;
}


*/



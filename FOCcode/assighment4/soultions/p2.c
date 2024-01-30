#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 10
#define MAX_COLS 100

void readRowsFromFile(char rows[MAX_ROWS][MAX_COLS], int *rowCount) {
    FILE *file = fopen("words.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        exit(EXIT_FAILURE);
    }

    *rowCount = 0;

    while (fgets(rows[*rowCount], MAX_COLS, file) != NULL && *rowCount < MAX_ROWS) {
        (*rowCount)++;
    }

    fclose(file);
}


int getSecondChar(int row, char rows[MAX_ROWS][MAX_COLS]) {
    if (row >= 1 && row <= MAX_ROWS && strlen(rows[row - 1]) > 1) {
        return rows[row - 1][1];
    } else {
        return -1; 
    }
}
void printSubstring(int row, int startIndex, int endIndex, char rows[MAX_ROWS][MAX_COLS]) {
    if (row >= 1 && row <= MAX_ROWS) {
        int rowLength = strlen(rows[row - 1]);

        if (startIndex >= 0 && endIndex < rowLength && startIndex <= endIndex) {
            for (int i = startIndex; i <= endIndex; i++) {
                printf("%c", rows[row - 1][i]);
            }
            
        
        }
        
    }
    }    

char *getSubstring(int row, int startIndex, int endIndex, char rows[MAX_ROWS][MAX_COLS]) {
    static char substring[MAX_COLS];

    if (row >= 1 && row <= MAX_ROWS) {
        int rowLength = strlen(rows[row - 1]);

        if (startIndex >= 0 && endIndex < rowLength && startIndex <= endIndex) {
            int index = 0;
            for (int i = startIndex; i <= endIndex; i++) {
                substring[index++] = rows[row - 1][i];
            }
            substring[index] = '\0';

            return substring;
        } 
    }
}


int main() {
    char rows[MAX_ROWS][MAX_COLS];
    int rowCount;

    readRowsFromFile(rows, &rowCount);
    int choice;
    scanf("%d",&choice);

    if(choice>9||choice<0){
        printf("Invalid input");
        return 0;
    }
    char x = getSecondChar(choice,rows);
    int wrodlen=x-'0';
    printf("%d\n",wrodlen);
    int rowLength = strlen(rows[choice - 1]);
    printSubstring(choice,wrodlen+2,rowLength-1,rows);
    printf("\n");
    char userinput[12];
    scanf("%s",userinput);
    if(strlen(userinput)!=wrodlen){
        printf("Wrong number of characters.\n");
        return 0;
    }
    
    char *substring = getSubstring(choice, 2,wrodlen+1, rows);
    int result2 = strcmp(userinput,substring);
    if(result2==0){
        printf("Correct answer.");
    }else{
        printf("Wrong answer.");
    }

    

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    FILE *inputFile, *outputFile;
    inputFile = fopen("Info.txt", "r");
    outputFile = fopen("Results.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    fprintf(outputFile, "Dist\tMidX\tMidY\n");

    double Ax, Ay, Bx, By;

    while (fscanf(inputFile, "%lf %lf %lf %lf", &Ax, &Ay, &Bx, &By) == 4) {
        
        double distance = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

        double midX = (Ax + Bx) / 2;
        double midY = (Ay + By) / 2;

        fprintf(outputFile, "%.2lf\t%.2lf\t%.2lf\n", distance, midX, midY);
    }

    fclose(inputFile);
    fclose(outputFile);


    return 0; 
}

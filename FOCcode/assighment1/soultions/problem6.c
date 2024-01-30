#include <stdio.h>

int main() {
    int inputDay, inputMonth, inputYear, calculatedDayOfYear;

    scanf("%d %d %d", &inputDay, &inputMonth, &inputYear);

    int isLeapYear = ((inputYear % 4 == 0 && inputYear % 100 != 0) || (inputYear % 400 == 0));

    calculatedDayOfYear = inputDay; 

    if (inputMonth > 1) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 2) {
        if (isLeapYear == 1) {
            calculatedDayOfYear = calculatedDayOfYear + 29;
        } else {
            calculatedDayOfYear = calculatedDayOfYear + 28;
        }
    }
    if (inputMonth > 3) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 4) calculatedDayOfYear = calculatedDayOfYear + 30;
    if (inputMonth > 5) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 6) calculatedDayOfYear = calculatedDayOfYear + 30;
    if (inputMonth > 7) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 8) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 9) calculatedDayOfYear = calculatedDayOfYear + 30;
    if (inputMonth > 10) calculatedDayOfYear = calculatedDayOfYear + 31;
    if (inputMonth > 11) calculatedDayOfYear = calculatedDayOfYear + 30;

    printf("%d", calculatedDayOfYear);

    return 0;
}


#include <stdio.h>

int main() {
    int totalIntegers, divisor;
    scanf("%d %d", &totalIntegers, &divisor);

    int sum = 0;
    int previousNumber = -1; 

    for (int i = 0; i < totalIntegers; ++i) {
        int currentInteger;
        scanf("%d", &currentInteger);

        if (previousNumber % divisor != 0 && currentInteger % divisor != 0) {
            sum += currentInteger;
        }

        previousNumber = currentInteger;
    }

    printf("%d\n", sum);

    return 0;
}

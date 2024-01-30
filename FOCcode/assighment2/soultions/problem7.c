#include <stdio.h>
#include "problem7-library.h"

// Function to find the Least Common Multiple (LCM) of two numbers
long long leastCommonMultiple(long long num1, long long num2) {
    return (num1 * num2) / greatestCommonDivisor(num1, num2);
}

int main() {
    int n;
    scanf("%d", &n);

    long long gcd_result, lcm_result;
    scanf("%lld", &gcd_result);
    lcm_result = gcd_result;

    for (int i = 1; i < n; ++i) {
        long long current_number;
        scanf("%lld", &current_number);

        gcd_result = greatestCommonDivisor(gcd_result, current_number);
        lcm_result = leastCommonMultiple(lcm_result, current_number);
    }

    printf("GCD: %lld\n", gcd_result);
    printf("LCM: %lld\n", lcm_result);

    return 0;
}

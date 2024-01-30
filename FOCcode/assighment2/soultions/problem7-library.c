// DO NOT MODIFY THIS FILE
// Library to use in Problem 7

long long greatestCommonDivisor(long long num1, long long num2) {
    if (num2 == 0)
        return num1;
    
    return greatestCommonDivisor(num2, num1 % num2);
}
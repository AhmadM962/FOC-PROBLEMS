// DO NOT MODIFY THIS FILE
// Library to use in Problem 8

long long factorial(int number) {
	if (number == 0)
		return 1;
	return number * factorial(number - 1);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int factorial(int n);

int main(void) {
	long long int num;
	scanf("%d", &num);

	printf("%lld", factorial(num));

	return 0;
}

long long int factorial(int n) {
	if (n < 1)
		return 1;
	return n * factorial(n - 1);
}
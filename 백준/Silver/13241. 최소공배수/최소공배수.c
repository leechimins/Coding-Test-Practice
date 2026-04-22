#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int gcd(long long int x, long long int y);

int main(void) {
	long long int a, b, lcm;
	scanf("%lld %lld", &a, &b);

	lcm = a * b / gcd(a, b);

	printf("%lld", lcm);

	return 0;
}

long long int gcd(long long int x, long long int y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}
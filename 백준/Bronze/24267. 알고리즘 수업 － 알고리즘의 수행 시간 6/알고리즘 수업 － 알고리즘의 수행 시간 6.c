#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long int n;
	scanf("%lld", &n);
    long long int nn = n*(n-1)*(n-2)/6;

	printf("%lld\n3", nn);

	return 0;
}
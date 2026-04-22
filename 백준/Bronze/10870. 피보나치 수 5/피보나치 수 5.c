#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n);

int main(void) {
	int num;
	scanf("%d", &num);

	printf("%d", fibo(num));

	return 0;
}

int fibo(int n) {
	if (n < 2)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}
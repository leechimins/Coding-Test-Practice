#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[2] = { 0 };
	int c, n;

	scanf("%d %d %d %d", &a[1], &a[0], &c, &n);
	if (a[1] * n + a[0] <= c * n && a[1] <= c)
		printf("1");
	else
		printf("0");

	return 0;
}
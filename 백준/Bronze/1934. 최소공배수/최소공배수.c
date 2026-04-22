#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);

int main(void) {
	int t, a[1000], b[1000], lcm[1000];
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
		scanf("%d %d", &a[i], &b[i]);

	for (int i = 0; i < t; i++)
		lcm[i] = a[i] * b[i] / gcd(a[i], b[i]);

	for (int i = 0; i < t; i++)
		printf("%d\n", lcm[i]);

	return 0;
}

int gcd(int x, int y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}
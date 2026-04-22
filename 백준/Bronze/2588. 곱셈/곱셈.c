#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n1, n2, n3, n4, n5, n6;
	int n2_1, n2_10, n2_100;

	scanf("%d", &n1);
	scanf("%d", &n2);
	
	n2_100 = n2 / 100;
	n2_10 = (n2 % 100) / 10;
	n2_1 = (n2 % 100) % 10;

	n3 = n1 * n2_1;
	n4 = n1 * n2_10;
	n5 = n1 * n2_100;
	n6 = n1 * n2;

	printf("%d\n%d\n%d\n%d", n3, n4, n5, n6);

	return 0;
}
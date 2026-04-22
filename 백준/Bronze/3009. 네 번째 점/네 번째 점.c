#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x[4], y[4];
	scanf("%d %d", &x[0], &y[0]);
	scanf("%d %d", &x[1], &y[1]);
	scanf("%d %d", &x[2], &y[2]);

	if (x[0] == x[1])
		x[3] = x[2];
	else if (x[0] == x[2])
		x[3] = x[1];
	else
		x[3] = x[0];

	if (y[0] == y[1])
		y[3] = y[2];
	else if (y[0] == y[2])
		y[3] = y[1];
	else
		y[3] = y[0];

	printf("%d %d", x[3], y[3]);

	return 0;
}
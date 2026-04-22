#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, x[100000] = { 0 }, y[100000] = { 0 };
	int i, x1 = 10000, x2 = -10000, y1 = 10000, y2 = -10000, area;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &x[i], &y[i]);
		if (x[i] < x1)
			x1 = x[i];
		if (x[i] > x2)
			x2 = x[i];
		if (y[i] < y1)
			y1 = y[i];
		if (y[i] > y2)
			y2 = y[i];
	}
	if (N == 1)
		area = 0;
	else
		area = (x2 - x1) * (y2 - y1);

	printf("%d", area);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f, x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	if (a == 0) {
		y = c / b;
		x = (f - e * y) / d;
	}
	else if (b == 0) {
		x = c / a;
		y = (f - d * x) / e;
	}
	else if (d == 0) {
		y = f / e;
		x = (c - b * y) / a;
	}
	else if (e == 0) {
		x = f / d;
		y = (c - a * x) / b;
	}
	else {
		x = (e * c - b * f) / (a * e - b * d);
		y = (f - d * x) / e;
	}

	printf("%d %d", x, y);

	return 0;
}
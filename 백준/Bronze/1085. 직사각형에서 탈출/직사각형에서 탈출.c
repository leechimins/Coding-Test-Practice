#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, w, h;
	int distance;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x <= y && x <= w - x && x <= h - y)
		distance = x;
	else if (y <= w - x && y <= h - y)
		distance = y;
	else if (w - x <= h - y)
		distance = w - x;
	else
		distance = h - y;		

	printf("%d", distance);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, V;
	int day = 1, oneDay;
	scanf("%d %d %d", &A, &B, &V);
	oneDay = A - B;

	/*for (; now < V; day++) {
		now += A;
		if (now >= V)
			break;
		now -= B;
	}*/

	day = (V - B - 1) / (A - B) + 1;

	printf("%d", day);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long int triangle[50][50] = { {1}, {1, 1} };
	int r, c, w, sum = 0;
	scanf("%d %d %d", &r, &c, &w);

	for (int i = 2; i < r + w; i++) {
		triangle[i][0] = 1;
		triangle[i][i] = 1;
		for (int k = 1; k < i; k++)
			triangle[i][k] = triangle[i - 1][k - 1] + triangle[i - 1][k];
	}

	r--; c--;
	for (int i = r; i < r + w; i++)
		for (int k = c; k < c + i + 1 - r; k++)
			sum += triangle[i][k];

	printf("%d", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long int triangle[50][50] = { {1}, {1, 1} };
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 2; i < n; i++) {
		triangle[i][0] = 1;
		triangle[i][i] = 1;
		for (int k = 1; k < i; k++)
			triangle[i][k] = triangle[i - 1][k - 1] + triangle[i - 1][k];
	}
	
	printf("%lld ", triangle[n-1][k-1]);

	return 0;
}
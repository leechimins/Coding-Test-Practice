#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int basket[100] = { 0 }, n, m, i, j, k;
	scanf("%d %d", &n, &m);

	for (int mth = 0; mth < m; mth++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int input = i - 1; input < j; input++)
			basket[input] = k;
	}

	for (int num = 0; num < n; num++)
		printf("%d ", basket[num]);

	return 0;
}
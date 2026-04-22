#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int T, H, W, N, x, y;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		N--;

		x = N / H + 1;
		y = N % H + 1;

		printf("%d%02d\n", y, x);
	}

	return 0;
}
#include <stdio.h>

int main(void) {
	int N, size[6], T, P;
	int pBundle, pRem, tTotal = 0;

	scanf("%d", &N);
	for (int i = 0; i < 6; i++) scanf("%d", &size[i]);
	scanf("%d %d", &T, &P);

	for (int i = 0; i < 6; i++)
		tTotal += (size[i] % T == 0) ? size[i] / T : size[i] / T + 1;

	pBundle = N / P;
	pRem = N % P;

	printf("%d\n%d %d", tTotal, pBundle, pRem);

	return 0;
}
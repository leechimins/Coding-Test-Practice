#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, num[100];
	int prime[100], index = 0, isPrime, i, j;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < N; i++) {
		for (isPrime = 1, j = 2; j < num[i]; j++)
			if (num[i] % j == 0) {
				isPrime = 0;
				break;
			}
		if (isPrime && num[i] != 1)
			prime[index++] = num[i];
	}
	printf("%d", index);

	return 0;
}
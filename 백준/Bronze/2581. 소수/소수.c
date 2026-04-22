#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int M, N;
	int total = 0, prime = 0, isPrime = 1, first = 0;
	scanf("%d %d", &M, &N);

	for (int num = M, i = 2; num <= N; num++) {
		if (num == 1)
			isPrime = 0;
		else
			for (i = 2, isPrime = 1; i < num; i++)
				if (num % i == 0) {
					isPrime = 0;
					break;
				}
		if (isPrime) {
			if (!total)
				first = num;
			total += num;
		}
	}
	if (total)
		printf("%d\n%d", total, first);
	else
		printf("-1");

	return 0;
}
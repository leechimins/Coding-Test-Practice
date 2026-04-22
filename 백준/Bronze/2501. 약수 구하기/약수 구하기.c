#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, K;
	int count = 0, num;
	scanf("%d %d", &N, &K);

	for (num = 1; num <= N; num++) {
		if (N % num == 0)
			count++;
		if (count == K)
			break;
	}
	if (count < K)
		printf("0");
	else
		printf("%d", num);

	return 0;
}
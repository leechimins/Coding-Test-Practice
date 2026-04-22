#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	int yaksu, isYaksu, num;
	scanf("%d", &N);

	while (N != 1) {
		for (num = 2; num <= N; num++)
			if (N % num == 0) {
				yaksu = num;
				break;
			}
		N /= yaksu;
		printf("%d\n", yaksu);
	}

	return 0;
}
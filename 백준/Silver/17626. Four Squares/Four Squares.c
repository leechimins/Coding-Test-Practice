#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, n, num[224] = { 0 }, flag = 1, result = 4;
	scanf("%d", &N);

	for (int i = 1; i <= 223; i++)
		num[i] = i * i;

	for (int i = 1; result > 1 && i < 224; i++) {
		n = num[i];
		if (n == N) {
			result = 1;
			break;
		}

		for (int j = 1; result > 2 && j < 224; j++) {
			n = num[i] + num[j];
			if (n == N) {
				result = 2;
				flag = 0;
				break;
			}

			for (int k = 1; result > 3 && k < 224; k++) {
				n = num[i] + num[j] + num[k];
				if (n == N) {
					result = 3;
					break;
				}
			}
		}
	}

	printf("%d", result);

	return 0;
}
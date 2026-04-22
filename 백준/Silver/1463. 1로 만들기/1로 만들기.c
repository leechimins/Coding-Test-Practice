#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int go_to_one(int num, int* memo, int* backPointer);

int main(void) {
	int N, result;
	scanf("%d", &N);

	int* memo = (int*)malloc(sizeof(int) * (N + 1));
	int* backPointer = (int*)malloc(sizeof(int) * (N + 1));
	for (int i = 0; i <= N; i++) {
		memo[i] = 0;
		backPointer[i] = 0;
	}

	result = go_to_one(N, memo, backPointer);
	printf("%d", result);

	free(memo);
	free(backPointer);
	return 0;
}

int go_to_one(int num, int* memo, int* backPointer) {
	if (num == 1) return 0;

	if (memo[num] == 0) {
		int count;
		memo[num] = num;

		if (num % 3 == 0) {
			count = go_to_one(num / 3, memo, backPointer) + 1;
			if (count < memo[num]) {
				memo[num] = count;
				backPointer[num] = 3;
			}
		}
		if (num % 2 == 0) {
			count = go_to_one(num / 2, memo, backPointer) + 1;
			if (count < memo[num]) {
				memo[num] = count;
				backPointer[num] = 2;
			}
		}
		count = go_to_one(num - 1, memo, backPointer) + 1;
		if (count < memo[num]) {
			memo[num] = count;
			backPointer[num] = 1;
		}
	}

	return memo[num];
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int data[101], count[10] = { 0 };
	int TC, N, M, pos, priority, result;
	scanf("%d", &TC);

	while (TC--) {
		for (int i = 1; i < 10; i++)
			count[i] = 0;

		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; i++) {
			scanf("%d", &data[i]);
			count[data[i]]++;
		}

		pos = 9 * N - 1;
		priority = 9;
		result = 1;

		while (count[priority] == 0)
			priority--;

		while (priority > data[M]) {
			while (data[pos % N] != priority)
				pos--;
			result += count[priority];
			
			do {
				priority--;
			} while (count[priority] == 0);
		}

		do {
            pos++;
        } while (data[pos % N] != priority);

		while (pos % N != M) {
			if (data[pos % N] == priority)
				result++;
			pos++;
		}

		printf("%d\n", result);
	}

	return 0;
}
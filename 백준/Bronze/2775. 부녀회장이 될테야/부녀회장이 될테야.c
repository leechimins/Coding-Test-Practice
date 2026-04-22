#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void house(int n[]);

int main(void) {
	int T, k, n;
	int people[210] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
	scanf("%d", &T);

	house(people);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", people[k * 14 + n - 1]);
	}

	return 0;
}

void house(int n[]) {
	for (int i = 1; i < 15; i++)
		for (int j = 0, jj = 0; j < 14; j++) {
			jj = j;
			do {
				n[i * 14 + j] += n[(i - 1) * 14 + j - jj];
			} while (jj--);
		}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[10], rest[10], isNew = 10, idx1, idx2;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		rest[i] = num[i] % 42;
	}

	for (idx1 = 0, idx2 = idx1 + 1; idx1 < 10; idx1++, idx2 = idx1 + 1) {
		while (rest[idx1] != rest[idx2] && idx2 < 10)
			idx2++;
		if (idx2 != 10) {
			idx2++;
			isNew--;
		}
	}

	printf("%d", isNew);

	return 0;
}
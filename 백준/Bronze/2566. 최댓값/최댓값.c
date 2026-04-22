#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[9][9];
	int bigNum = -1, row, col;

	for (int r = 0; r < 9; r++)
		for (int c = 0; c < 9; c++)
			scanf("%d", &num[r][c]);

	for (int r = 0; r < 9; r++)
		for (int c = 0; c < 9; c++)
			if (num[r][c] > bigNum) {
				bigNum = num[r][c];
				row = r, col = c;
			}

	printf("%d\n", bigNum);
	printf("%d %d", row + 1, col + 1);

	return 0;
}
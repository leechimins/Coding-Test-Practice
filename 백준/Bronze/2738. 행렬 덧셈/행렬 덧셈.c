#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1[100][100], num2;
	int row, col;
	scanf("%d %d", &row, &col);

	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			scanf("%d", &num1[r][c]);
	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++) {
			scanf("%d", &num2);
			num1[r][c] += num2;
		}

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
			printf("%d ", num1[r][c]);
		printf("\n");
	}

	return 0;
}
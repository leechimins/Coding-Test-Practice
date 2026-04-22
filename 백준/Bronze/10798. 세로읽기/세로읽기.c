#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[5][16] = { "", "", "", "", "" };
	int row, col;
	
	for (int i = 0; i < 5; i++)
		scanf("%s", word[i]);
	for (row = 0, col = 0; col < 15; col++)
		for (row = 0; row < 5; row++)
			if ('0' <= word[row][col] && word[row][col] <= 'z')
				printf("%c", word[row][col]);
			else
				continue;

	return 0;
}
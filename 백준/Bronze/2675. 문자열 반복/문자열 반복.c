#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int testCase, r, len;
	char word[21], newString[61];
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d %s", &r, word);
		for (len = 0; word[len] != '\0'; len++);

		for (int k = 0; k < len; k++) {
			for (int j = 0; j < r; j++)
				printf("%c", word[k]);
		}
		printf("\n");
	}

	return 0;
}
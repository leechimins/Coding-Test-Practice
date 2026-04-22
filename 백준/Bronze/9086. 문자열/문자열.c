#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[1001];
	int num, len;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", word);
		for (len = 0; word[len] != '\0'; len++);

		printf("%c%c\n", word[0], word[len-1]);
	}

	return 0;
}
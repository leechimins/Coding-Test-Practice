#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[101];
	int len;
	scanf("%s", word);

	for (len = 0; word[len] != '\0'; len++);

	printf("%d", len);

	return 0;
}
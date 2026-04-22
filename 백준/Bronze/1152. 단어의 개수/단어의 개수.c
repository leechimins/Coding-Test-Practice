#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, count = 1;
	char word[1000001];
	gets(word);

	for (i = 0; word[i] == ' '; i++);
	if (word[i] == '\0') {
		printf("0");
		return 0;
	}
	for (; word[i] != '\0'; i++) {
		if (word[i] == ' ' && word[i + 1] != ' ' && word[i + 1] != '\0')
			count++;
	}

	printf("%d", count);

	return 0;
}
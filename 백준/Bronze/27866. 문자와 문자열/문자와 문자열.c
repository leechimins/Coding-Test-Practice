#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[1001];
	int i;
	scanf("%s", word);
	scanf("%d", &i);

	printf("%c", word[i-1]);

	return 0;
}
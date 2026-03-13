#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[101];
	int num, len, total = 0;
	scanf("%d", &len);
	scanf("%s", word);

	for (int i = 0; i < len; i++) {
		num = word[i] - '0';
		total += num;
	}

	printf("%d", total);

	return 0;
}
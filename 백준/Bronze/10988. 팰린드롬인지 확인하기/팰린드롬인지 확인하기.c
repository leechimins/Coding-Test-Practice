#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[101];
	int isPalindrome, len, li, ri;
	scanf("%s", word);

	for (len = 0; word[len] != '\0'; len++);
	for (li = 0; li < len / 2; li++) {
		ri = len - 1 - li;
		if (word[li] == word[ri])
			isPalindrome = 1;
		else {
			isPalindrome = 0;
			break;
		}
	}

	printf("%d", isPalindrome);

	return 0;
}
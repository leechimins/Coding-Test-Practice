#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int char2num(char, int);

int main(void) {
	char num[10001] = { '\0' };
	int decimalNum = 0, base, len, oneNum, square = 1, s;

	scanf("%s %d", num, &base);
	for (len = 0; num[len] != '\0'; len++);

	for (int n = 0; n < len; n++) {
		oneNum = char2num(num[n], base);
		for (s = 0, square = 1; s < len - n - 1; s++)
			square *= base;
		oneNum *= square;
		//! printf("%d %d\n", square, oneNum);
		decimalNum += oneNum;
	}

	printf("%d", decimalNum);

	return 0;
}
int char2num(char c, int b) {
	if ('0' <= c && c <= '9')
		return c - '0';
	else
		return c - 'A' + 10;
}
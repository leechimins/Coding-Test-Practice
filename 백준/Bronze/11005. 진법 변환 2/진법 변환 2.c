#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char num2char(int);

int main(void) {
	int dimecalNum, base, oneNum, i = 0, len;
	char reverseNumber[10001], number[10001], charNum;
	scanf("%d %d", &dimecalNum, &base);

	while (dimecalNum > 0) {
		oneNum = dimecalNum % base;
		charNum = num2char(oneNum);
		reverseNumber[i++] = charNum;

		dimecalNum /= base;
	}
	len = i;
	reverseNumber[len] = '\0';
	for (int j = 0; j < len; j++, i--)
		number[j] = reverseNumber[i - 1];
	number[len] = '\0';

	printf("%s", number);

	return 0;
}
char num2char(int n) {
	char c;
	if (0 <= n && n <= 9)
		return n + '0';
	else {
		c = n - 10 + 'A';
		return c;
	}
}
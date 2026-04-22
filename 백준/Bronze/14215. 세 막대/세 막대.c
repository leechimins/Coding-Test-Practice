#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, C;
	int big, len1, len2, total;
	scanf("%d %d %d", &A, &B, &C);

	big = A;
	if (big < B) big = B;
	if (big < C) big = C;
	
	if (big == A)
		len1 = B, len2 = C;
	else if (big == B)
		len1 = A, len2 = C;
	else
		len1 = A, len2 = B;

	if (big >= len1 + len2)
		big = len1 + len2 - 1;

	total = big + len1 + len2;
	printf("%d", total);

	return 0;
}
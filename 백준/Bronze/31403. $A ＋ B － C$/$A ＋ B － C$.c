#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, C;
	int bLen = 10, result1, result2;
	
	scanf("%d %d %d", &A, &B, &C);
	
	while (B/bLen > 0)
		bLen *= 10;
	
	result1 = A + B - C;
	result2 = A * bLen + B - C;
	
	printf("%d\n%d", result1, result2);
	
	return 0;
}
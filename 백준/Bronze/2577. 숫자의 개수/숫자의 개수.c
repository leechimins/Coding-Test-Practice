#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, result;
	int count[10] = { 0 };
	
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;

	while (result) {
		count[result % 10]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);

	return 0;
}
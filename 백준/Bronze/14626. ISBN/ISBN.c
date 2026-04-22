#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int sum = 0, weight, brokenNum, result;
	char isbn[14];
	scanf("%s", isbn);

	for (int i = 0; i < 13; i++) {
		weight = (i % 2 ? 3 : 1);
		if (isbn[i] == '*') brokenNum = weight;
		else sum += weight * (isbn[i] - '0');
	}
	
	int ten = 10;
	while ((ten - sum % 10) % brokenNum) ten += 10;

	result = ((ten - sum % 10) / brokenNum) % 10;

	printf("%d", result);

	return 0;
}
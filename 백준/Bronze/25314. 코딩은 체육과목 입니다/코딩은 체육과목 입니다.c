#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int bite;
	scanf("%d", &bite);

	for (int i = 0; i < bite / 4; i++)
		printf("long ");
	printf("int");

	return 0;
}
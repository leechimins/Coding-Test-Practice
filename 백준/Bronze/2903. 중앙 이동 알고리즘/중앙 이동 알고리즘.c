#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int width = 1, result = 4;
	int tryTime;
	scanf("%d", &tryTime);

	for (int i = 0; i < tryTime; i++) {
		width *= 2;
		result = (width + 1) * (width + 1);
	}
	printf("%d", result);

	return 0;
}
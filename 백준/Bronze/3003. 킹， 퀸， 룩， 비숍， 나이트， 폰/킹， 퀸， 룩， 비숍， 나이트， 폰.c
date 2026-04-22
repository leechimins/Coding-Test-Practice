#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//! 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	int white[6] = { 1, 1, 2, 2, 2, 8 };
	int find[6], differ[6];

	for (int i = 0; i < 6; i++) {
		scanf("%d", &find[i]);
		differ[i] = white[i] - find[i];
	}

	for (int i = 0; i < 6; i++)
		printf("%d ", differ[i]);


	return 0;
}
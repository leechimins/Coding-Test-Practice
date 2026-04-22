#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 28

int main(void) {
	int student[LEN], submission, isSub, noSub[2], idx = 0;
	for (int i = 0; i < LEN; i++)
		scanf("%d", &student[i]);
	
	for (int i = 0; i < 30; i++){
		submission = i + 1;

		for (int j = 0; j < LEN; j++) {
			if (submission == student[j]) {
				isSub = 1;
				break;
			}
			else
				isSub = 0;
		}
		if (!isSub)
			noSub[idx++] = submission;
	}

	if (noSub[0] > noSub[1])
		printf("%d\n%d", noSub[1], noSub[0]);
	else
		printf("%d\n%d", noSub[0], noSub[1]);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int numArr[100];
	int len, find, count = 0;

	scanf("%d", &len);
	for (int i = 0; i < len; i++)
		scanf("%d", &numArr[i]);
	scanf("%d", &find);

	for (int i = 0; i < len; i++)
		if (find == numArr[i])
			count++;
	printf("%d", count);

	return 0;
}
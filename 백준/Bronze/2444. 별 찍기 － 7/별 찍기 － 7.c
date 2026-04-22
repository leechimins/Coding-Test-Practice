#include <stdio.h>

int main(void) {
	int len;
	scanf("%d", &len);

	for (int n = 1; n <= len; n++) {
		for (int i = 1; i <= len - n; i++)
			printf(" ");
		for (int i = 1; i <= n * 2 - 1; i++)
			printf("*");
		printf("\n");
	}
	for (int n = len - 1; n > 0; n--) {
		for (int i = len - n; i > 0; i--)
			printf(" ");
		for (int i = n * 2 - 1; i > 0; i--)
			printf("*");
		printf("\n");
	}

	return 0;
}
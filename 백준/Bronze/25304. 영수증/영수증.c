#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total, n, price, count, money = 0;
	scanf("%d", &total);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &price, &count);
		money += price * count;
	}

	if (total == money)
		printf("Yes");
	else
		printf("No");

	return 0;
}
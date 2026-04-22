#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n[3], big, small[2], b, s;

	do {
		big = 0;
		scanf("%d %d %d", &n[0], &n[1], &n[2]);
		if (!n[0] && !n[1] && !n[2])
			break;
		
		for (b = 0; b < 3; b++)
			if (big < n[b])
				big = n[b];
		for (b = 0, s = 0; b < 3; b++)
			if (big >= n[b])
				small[s++] = n[b];

		if (big >= small[0] + small[1])
			printf("Invalid\n");
		else
			if (n[0] == n[1] && n[1] == n[2] && n[2] == n[0])
				printf("Equilateral\n");
			else if (n[0] == n[1] || n[1] == n[2] || n[2] == n[0])
				printf("Isosceles\n");
			else
				printf("Scalene\n");
	} while (1);

	return 0;
}
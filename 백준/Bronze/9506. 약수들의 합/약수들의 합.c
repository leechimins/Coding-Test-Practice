#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int total, index, yaksu[10000] = { 0 }, count;

	while (1) {
		total = 0, index = 0;
		scanf("%d", &n);
		if (n == -1) break;

		for (int i = 1; i < n; i++)
			if (n % i == 0)
				yaksu[index++] = i;
		count = --index;

		while (index >= 0)
			total += yaksu[index--];

		if (total == n) {
			printf("%d = ", n);
			for (index = 0; yaksu[index] != 0; index++)
				if (index < count) printf("%d + ", yaksu[index]);
				else printf("%d\n", yaksu[index]);
		}
		else
			printf("%d is NOT perfect.\n", n);

		for (int i = 0; i < count; i++)
			yaksu[i] = 0;
	}

	return 0;
}
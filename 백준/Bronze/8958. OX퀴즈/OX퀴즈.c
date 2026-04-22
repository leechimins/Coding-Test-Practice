#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char answer[80];
	int T, total, cur;
	scanf("%d", &T);

	for (int _ = 0; _ < T; _++) {
		total = 0; cur = 0;
		scanf("%s", answer);

		for (int i = 0; answer[i]; i++) {
			if (answer[i] == 'O') {
                cur++;
                total += cur;
            }
			else cur = 0;
		}
		printf("%d\n", total);
	}

	return 0;
}
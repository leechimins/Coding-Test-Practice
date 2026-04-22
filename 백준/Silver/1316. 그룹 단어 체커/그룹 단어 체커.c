#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isGroup(char[]);

int main(void) {
	int n, count = 0;
	char word[101];
	scanf("%d", &n);

	for (int _ = 0; _ < n; _++) {
		while (getchar() != '\n');
		scanf("%s", word);

		if (isGroup(word))
			count++;
	}
	printf("%d", count);

	return 0;
}
int isGroup(char w[]) {
	for (int i = 0; w[i] != '\0'; i++)
		if (w[i] == w[i + 1])
			continue;
		else
			for (int j = i + 1; w[j] != '\0'; j++)
				if (w[i] == w[j])
					return 0;
	return 1;
}
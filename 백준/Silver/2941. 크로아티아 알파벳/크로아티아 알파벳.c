#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count = 0, len;
	char word[101];
	scanf("%s", word);

	for (len = 0; word[len] != '\0'; len++);
	for (int i = 0; i < len; i++, count++)
		if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-'))
			i++;
		else if (word[i] == 'd' && word[i + 1] == '-')
			i++;
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
			i += 2;
		else if ((word[i] == 'l' || word[i] == 'n') && word[i + 1] == 'j')
			i++;
		else if ((word[i] == 's' || word[i] == 'z') && word[i + 1] == '=')
			i++;
		else;

	printf("%d", count);

	return 0;
}
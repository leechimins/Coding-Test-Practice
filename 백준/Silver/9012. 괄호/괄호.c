#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 51

int VPS(char ps[LEN]);

int main(void) {
	int T, ans;
	char str[LEN];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%s", str);
		ans = VPS(str);
		if (ans) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

int VPS(char ps[LEN]) {
	int stack = 0;
	for (int i = 0; ps[i]; i++) {
		if (ps[i] == '(') stack++;
		else stack--;
		if (stack < 0) break;
	}
	return !stack;
}
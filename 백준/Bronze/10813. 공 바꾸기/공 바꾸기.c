#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n[100], len, m, i, j, tmp;
	scanf("%d %d", &len, &m);

	for (int idx = 0; idx < len; idx++)
		n[idx] = idx + 1;
	for (int idx = 0; idx < m; idx++) {
		scanf("%d %d", &i, &j);
		tmp = n[i-1];
		n[i-1] = n[j-1];
		n[j-1] = tmp;
	}
	for (int idx = 0; idx < len; idx++)
		printf("%d ", n[idx]);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n[100], len, m, i, j, tmp, front, end;
	scanf("%d %d", &len, &m);

	for (int num = 0; num < len; num++)
		n[num] = num + 1;

	for (int _ = 0; _ < m; _++) {
		scanf("%d %d", &i, &j);
		i--;
		j--;
		for (int cnt = 0; cnt < (j - i + 2) / 2; cnt++) {
			front = i + cnt;
			end = j - cnt;

			tmp = n[front];
			n[front] = n[end];
			n[end] = tmp;
		}
	}

	for (int num = 0; num < len; num++)
		printf("%d ", n[num]);

	return 0;
}
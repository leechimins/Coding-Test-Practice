#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    int total = H * 60 + M - 45;
    if (total < 0)
        total += 24 * 60;

    printf("%d %d", total / 60, total % 60);

	return 0;
}
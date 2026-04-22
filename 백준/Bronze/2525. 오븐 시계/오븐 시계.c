#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int A, B, C;
    int total, h, m;

    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    total = A * 60 + B + C;

    h = total / 60;
    m = total % 60;

    if (h >= 24) {
        h -= 24;
    }

    printf("%d %d", h, m);

    return 0;
}
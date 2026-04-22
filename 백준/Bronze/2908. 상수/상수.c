#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num1, num2, tmp1, tmp2, reverse1 = 0, reverse2 = 0, bigNum;
    scanf("%d %d", &num1, &num2);
    tmp1 = num1, tmp2 = num2;

    for (int i = 0; i < 3; i++) {
        reverse1 += tmp1 % 10;
        reverse1 *= 10, tmp1 /= 10;
        reverse2 += tmp2 % 10;
        reverse2 *= 10, tmp2 /= 10;
    }

    reverse1 /= 10;
    reverse2 /= 10;

    if (reverse1 > reverse2)
        bigNum = reverse1;
    else
        bigNum = reverse2;

    printf("%d", bigNum);

    return 0;
}
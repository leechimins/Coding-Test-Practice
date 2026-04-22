#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int A, B, C;
    int price;


    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C) {
        price = 10000 + A * 1000;
    }

    else if (A != B && B != C && C != A) {

        if (A > B && A > C) {
            price = A * 100;
        }
        else if (B > C && B > A) {
            price = B * 100;
        }
        else {
            price = C * 100;
        }
    }

    else {

        if (A == B && B != C) {
            price = 1000 + A * 100;
        }
        else if (B == C && C != A) {
            price = 1000 + B * 100;
        }
        else if (C == A && A != B) {
            price = 1000 + C * 100;
        }
    }

    printf("%d", price);

    return 0;
}
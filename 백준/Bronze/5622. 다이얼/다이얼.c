#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int time = 0, usingTime;
    char number[16], alpha;
    scanf("%s", &number);

    for (int i = 0; number[i] != '\0'; i++) {
        alpha = number[i];
        switch (alpha)
        {
        case 'A':
        case 'B':
        case 'C':
            usingTime = 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            usingTime = 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            usingTime = 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            usingTime = 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            usingTime = 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            usingTime = 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            usingTime = 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            usingTime = 10;
            break;
        default:
            usingTime = 1;
            break;
        }

        time += usingTime;
    }

    printf("%d", time);

    return 0;
}
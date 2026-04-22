#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char grade[3];
    double score;
    scanf("%s", grade);

    score = 4 - grade[0] + 'A';
    if (grade[1] == '+') score += 0.3;
    else if (grade[1] == '-') score -= 0.3;
    else if (grade[0] == 'F') score = 0;

    printf("%.1f", score);

    return 0;
}
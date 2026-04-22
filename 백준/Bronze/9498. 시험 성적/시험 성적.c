#include <stdio.h>

int main(void)
{
    int a;
    char res;
    scanf("%d", &a);
    if (90 <= a) res = 'A';
    else if (80 <= a) res = 'B';
    else if (70 <= a) res = 'C';
    else if (60 <= a) res = 'D';
    else res = 'F';
    printf("%c", res);
    return 0;
}
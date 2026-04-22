#include <stdio.h>

int main(void)
{
    int user, i;
    scanf("%d", &user);
    for (i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", user, i, user * i);
    }
    return 0;
}
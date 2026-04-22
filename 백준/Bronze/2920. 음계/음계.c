#include <stdio.h>

int main(void)
{
    int a[8] = { 0 }, i, up = 0, down = 9, sort = 0;
    scanf("%d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
    for (i = 0; i < 8; i++)
    {
        if (up < a[i])
        {
            up = a[i];
            sort = 1;
        }
        else
        {
            sort = 0;
            break;
        }
    }
    if (sort == 0)
    {
        for (i = 0; i < 8; i++)
        {
            if (down > a[i])
            {
                down = a[i];
                sort = -1;
            }
            else
            {
                sort = 0;
                break;
            }
        }
    }
    
    switch (sort)
    {
    case 1:
        printf("ascending");
        break;
    case -1:
        printf("descending");
        break;
    default:
        printf("mixed");
        break;
    }


    return 0;
}
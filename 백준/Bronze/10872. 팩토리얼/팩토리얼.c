#include <stdio.h>

int main(void)
{
    int a, i, result = 1;
    scanf("%d", &a);
    if (a==0) printf("1");
    else
    {
        for (i=a; i>0; i--) result *= i;
        printf("%d", result);
    }
    
	return 0;
}
#include <stdio.h>

int main(void)
{
    long a, b, res;
    scanf("%li %li", &a, &b);
    res = a*a - b*b;
    printf("%li", res);
	return 0;
}

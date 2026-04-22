#include <stdio.h>

int main(void)
{
    //! A+B, A-B, A*B, A/B(몫), A%B(나머지)
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n%d\n%d", a+b, a-b, a*b, a/b, a%b);
    
	return 0;
}

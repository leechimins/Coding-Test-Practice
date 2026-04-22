#include <stdio.h>

int main(void)
{
    long a, b;
    scanf("%li %li", &a, &b);
    if (a>b) printf("%li", a-b);
    else printf("%li", b-a);
	return 0;
}

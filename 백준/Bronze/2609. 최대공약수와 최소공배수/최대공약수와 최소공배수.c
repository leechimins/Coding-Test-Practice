#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void) {
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	printf("%d\n%d", gcd(n1, n2), lcm(n1, n2));

	return 0;
}

int gcd(int a, int b) {
	int tmp;
	while (b) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
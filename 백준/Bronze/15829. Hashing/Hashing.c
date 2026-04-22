#include <stdio.h>

long long int pow(int base, int exp);

int main(void) {
	int L;
	long long int hash = 0;
	char word[51];
	scanf("%d %s", &L, word);

	while (L--) {
		hash += (word[L] - 'a' + 1) * pow(31, L);
		hash %= 1234567891;
	}

	printf("%lld", hash % 1234567891);

	return 0;
}

long long int pow(int base, int exp) {
	long long int result = 1;
	while (exp--) {
		result *= base;
		result %= 1234567891;
	}
	return result;
}
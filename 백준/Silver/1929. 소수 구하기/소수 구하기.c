#include <stdio.h>

#define SIZE 1000001
void isPrime(int prime[], int n);

int main(void) {
	int M, N, prime[SIZE] = { 0 };
	scanf("%d %d", &M, &N);
	for (int i = 2; i < SIZE; i++) prime[i] = 1;
	isPrime(prime, N);
	for (int i = M; i<=N;i++)
		if (prime[i]) printf("%d\n", i);

	return 0;
}

void isPrime(int prime[], int n) {
	for (int i = 2; i * i <= n; i++)
		if (prime[i]) for (int j = i * i; j <= n; j += i) prime[j] = 0;
}
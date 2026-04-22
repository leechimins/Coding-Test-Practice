#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define Q 25
#define D 10
#define N 5
#define P 1

//!  쿼터(Quarter, $0.25) 다임(Dime, $0.10) 니켈(Nickel, $0.05) 페니(Penny, $0.01)
int main(void) {
	int quarter, dime, nickel, penny;
	int cs, money;
	scanf("%d", &cs);

	for (int i = 0; i < cs; i++) {
		scanf("%d", &money);

		quarter = money / Q;
		money %= Q;
		dime = money / D;
		money %= D;
		nickel = money / N;
		money %= N;
		penny = money;

		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}

	return 0;
}
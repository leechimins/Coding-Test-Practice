#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int lr = 1, floor = 1, numS, numE, x, number;
	int up, down;
	scanf("%d", &x);

	if (x == 1)
		up = 1, down = 1;
	else {
		do {
			lr++;

			numS = floor * (floor + 1) / 2;  ///< 1, 3, 6, 10
			floor++;
			numE = floor * (floor + 1) / 2;  ///< 3, 6, 10, 15
		} while (!(numS < x && x <= numE));  ///< 2~3, 4~6, 7~10, 11~15

		number = x - numS;
		if (lr % 2) { ///< 4/2
			down = number;
			up = floor + 1 - down;
		}
		else {
			up = number;
			down = floor + 1 - up;
		}
	}
	printf("%d/%d", up, down);

	return 0;
}
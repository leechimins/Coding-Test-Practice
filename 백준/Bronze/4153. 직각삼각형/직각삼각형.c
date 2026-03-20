#include <stdio.h>

int main(void) {
	int s1, s2, s3;

	while (scanf("%d %d %d", &s1, &s2, &s3), s1) {		
		if (s1*s1 + s2*s2 == s3*s3 || s2*s2 + s3*s3 == s1*s1 || s3*s3 + s1*s1 == s2*s2)
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}
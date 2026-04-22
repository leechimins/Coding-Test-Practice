#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Point;

int compare(const void* a, const void* b);

int main(void) {
	int N;
	scanf("%d", &N);
	Point* data = (Point*)malloc(sizeof(Point) * N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &data[i].x, &data[i].y);

	qsort(data, N, sizeof(Point), compare);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", data[i].x, data[i].y);

	return 0;
}

int compare(const void* a, const void* b) {
	Point A = *(Point*)a;
	Point B = *(Point*)b;

	if (A.y < B.y) return -1;
	else if (A.y > B.y) return 1;

	if (A.x < B.x) return -2;
	else if (A.x > B.x) return 2;

	return 0;
}
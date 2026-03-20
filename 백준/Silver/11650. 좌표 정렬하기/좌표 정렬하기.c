#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void merge_sort(int* x, int* y, int s, int e);
void merge(int* x, int* y, int p, int q, int r);
int compare(int x1, int y1, int x2, int y2);

int main(void) {
	int n;
	scanf("%d", &n);
	int* pointX = (int*)malloc(sizeof(int) * n);
	int* pointY = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
	    scanf("%d %d", &pointX[i], &pointY[i]);

	merge_sort(pointX, pointY, 0, n - 1);
	
	for (int i = 0; i < n; i++)
		printf("%d %d\n", pointX[i], pointY[i]);
	
	free(pointX);
	free(pointY);
	return 0;
}

void merge_sort(int* x, int* y, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		merge_sort(x, y, s, m);
		merge_sort(x, y, m + 1, e);
		merge(x, y, s, m, e);
	}
}

void merge(int* x, int* y, int p, int q, int r) {
	int* tempX = (int*)malloc(sizeof(int) * (r - p + 1));
	int* tempY = (int*)malloc(sizeof(int) * (r - p + 1));
	int lc = p, rc = q + 1, pos = 0;

	while (lc <= q && rc <= r) {
		if (compare(x[rc], y[rc], x[lc], y[lc]) < 0) {
		    tempX[pos] = x[rc];
			tempY[pos++] = y[rc++];
		}
		else {
		    tempX[pos] = x[lc];
			tempY[pos++] = y[lc++];
		}
	}
	while (lc <= q) {
	    tempX[pos] = x[lc];
	    tempY[pos++] = y[lc++];
	}
	while (rc <= r) {
	    tempX[pos] = x[rc];
	    tempY[pos++] = y[rc++];
	}

	for (int i = p, j = 0; i <= r; i++, j++) {
		x[i] = tempX[j];
		y[i] = tempY[j];
	}

	free(tempX);
	free(tempY);
}

int compare(int x1, int y1, int x2, int y2) {
    if (x1 < x2) return -1;
    else if (x1 > x2) return 1;
    
    if (y1 < y2) return -2;
    else if (y1 > y2) return 2;

	return 0;
}
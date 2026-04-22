#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void merge_sort(int* data, int s, int e);
void merge(int* data, int p, int q, int r);

int main(void) {
	int N, sum = 0, mean, median, mode = 0, range;
	scanf("%d", &N);
	int* data = (int*)malloc(sizeof(int) * N);
	int count[8001] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%d", &data[i]);
		sum += data[i];
		count[data[i] + 4000]++;
	}
	
	// 1. 산술 평균
	if (sum >= 0)
		mean = (double)sum / N + 0.5;
	else
		mean = (double)sum / N - 0.5;

	// 2. 중앙값
	merge_sort(data, 0, N - 1);
	median = data[N / 2];

	// 3. 최빈값
	for (int i = 1, flag = 1; i <= 8000; i++) {
		if (count[mode] < count[i]) {
			flag = 1;
			mode = i;
		}
		else if (flag && count[mode] == count[i]) {
			flag = 0;
			mode = i;
		}
	}
	mode -= 4000;
	
	// 4. 범위
	range = data[N - 1] - data[0];

	printf("%d\n%d\n%d\n%d", mean, median, mode, range);

	free(data);
	return 0;
}

void merge_sort(int* data, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		merge_sort(data, s, m);
		merge_sort(data, m + 1, e);
		merge(data, s, m, e);
	}
}

void merge(int* data, int p, int q, int r) {
	int* temp = (int*)malloc(sizeof(int) * (r - p + 1));
	int lc = p, rc = q + 1, pos = 0;

	while (lc <= q && rc <= r) {
		if (data[rc] < data[lc])
			temp[pos++] = data[rc++];
		else
			temp[pos++] = data[lc++];
	}
	while (lc <= q)
		temp[pos++] = data[lc++];
	while (rc <= r)
		temp[pos++] = data[rc++];

	for (int i = p, j = 0; i <= r; i++, j++)
		data[i] = temp[j];

	free(temp);
}
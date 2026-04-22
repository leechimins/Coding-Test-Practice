#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef char Person[21];

void merge_sort(Person* data, int s, int e);
void merge(Person* data, int p, int q, int r);

int main(void) {
	int N, M, size, result = 0;
	scanf("%d %d", &N, &M);
	size = N + M;
	Person* people = (Person*)malloc(sizeof(Person) * size);
	for (int i = 0; i < size; i++)
		scanf("%s", people[i]);
	
	merge_sort(people, 0, size - 1);

	for (int i = 0; i < size - 1; i++)
		if (strcmp(people[i], people[i + 1]) == 0)
			result++;
	printf("%d\n", result);
	for (int i = 0; i < size - 1; i++)
		if (strcmp(people[i], people[i + 1]) == 0)
			printf("%s\n", people[i++]);
	
	free(people);
	return 0;
}

void merge_sort(Person* data, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		merge_sort(data, s, m);
		merge_sort(data, m + 1, e);
		merge(data, s, m, e);
	}
}

void merge(Person* data, int p, int q, int r) {
	Person* temp = (Person*)malloc(sizeof(Person) * (r - p + 1));
	int lc = p, rc = q + 1, pos = 0;

	while (lc <= q && rc <= r) {
		if (strcmp(data[rc], data[lc]) < 0)
			strcpy(temp[pos++], data[rc++]);
		else
			strcpy(temp[pos++], data[lc++]);
	}
	while (lc <= q)
		strcpy(temp[pos++], data[lc++]);
	while (rc <= r)
		strcpy(temp[pos++], data[rc++]);

	for (int i = p, j = 0; i <= r; i++, j++)
		strcpy(data[i], temp[j]);

	free(temp);
}
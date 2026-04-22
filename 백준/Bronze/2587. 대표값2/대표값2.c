#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void execute(int value[], int start, int end);
int quickSort(int value[], int start, int end);

int main(void) {
	int arr[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	execute(arr, 0, 4);

	printf("%d\n%d", sum/5, arr[2]);

	return 0;
}

void execute(int value[], int start, int end) {
	int pivot = 0;
	if (start < end) {
		pivot = ﻿quickSort(value, start, end);
		execute(value, start, pivot - 1);
		execute(value, pivot + 1, end);
	}
}

int ﻿quickSort(int value[], int start, int end) {
	int left = start, right = end;
	int pivot = end;
	int tmp = 0;

	while (left < right) {
		while (value[left] < value[pivot] && left < right)  //! left가 pivot보다 크거나 같을 때까지
			left++;
		while (value[right] >= value[pivot] && left < right)  //! right가 pivot보다 작을 때까지
			right--;

		if (left < right) {
			tmp = value[left];
			value[left] = value[right];
			value[right] = tmp;
		}
	}
	tmp = value[left];
	value[left] = value[pivot];
	value[pivot] = tmp;

	return right;
}
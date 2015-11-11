///@file	shell sort
///@author	zhaowei
///@date	2015.11.12
#include <stdio.h>
void shellsort(int v[], int n) {
	int gap, i, j, tmp;
	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
				tmp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = tmp;
			}
		}
	}
}

int main() {
	int v[] = {10, 3, 25, 2, 16, 2, 36};
	for (int i = 0; i < 7; i++)
		printf("%d ", v[i]);
	printf("\n");
	shellsort(v, 7);

	for (int i = 0; i < 7; i++)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}
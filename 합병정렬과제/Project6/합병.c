#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mergeSort(int data[], int p, int r);
void merge(int data[], int p, int q, int r);

int main() {
	clock_t start, end;
	srand(time(NULL));

	int data[10000];
	for (int i = 0; i < 10000; i++) {
		data[i] = rand();
	}
	/*
	printf("정렬 전\n");
	for (int i = 0; i < 1000; i++) {
	   printf("%d ", data[i]);

	}
	*/
	start = clock();

	mergeSort(data, 0, 9999);
	end = clock();
	printf("%d clocks (%d clocks/second)\n", end - start, CLOCKS_PER_SEC);


	/*
	printf("\n정렬 후\n");
	for (int i = 0; i < 999; i++) {
	   printf("%d ", data[i]);
	}
	*/

	return 0;
}
void mergeSort(int data[], int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}
void merge(int data[], int p, int q, int r) {
	int i = p, j = q + 1, k = p;
	int tmp[10000];
	while (i <= q && j <= r) {
		if (data[i] <= data[j])tmp[k++] = data[i++];
		else tmp[k++] = data[j++];
	}
	while (i <= q) tmp[k++] = data[i++];
	while (j <= r) tmp[k++] = data[j++];
	for (int a = p; a <= r; a++)data[a] = tmp[a];
}
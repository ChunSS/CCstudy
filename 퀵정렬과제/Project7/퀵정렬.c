#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIST_SIZE 10000

void quickSort(int list[], int left, int right);
int partition(int list[], int left, int right);
void print_list(int list[], int size);
void swap(int *p, int *q);

void main()
{
	clock_t start, end;
	srand(time(NULL));
	int list[LIST_SIZE];
	for (int i = 0; i < 10000; i++) {
		list[i] = rand();
	}
	/*
	printf("퀵정렬 전 리스트\n");
	print_list(list, LIST_SIZE);
	printf("\n");
	*/
	start = clock();

	quickSort(list, 0, 9999);
	end = clock();
	printf("%d clocks (%d clocks/second)\n", end - start, CLOCKS_PER_SEC);
	/*
	printf("퀵정렬 과정\n");
	quickSort(list, 0, LIST_SIZE - 1);
	printf("\n");
	
	printf("퀵정렬 후 리스트\n");
	print_list(list, LIST_SIZE);
	printf("\n");
	*/
}

void quickSort(int list[], int left, int right)
{
	if (left < right) {
		int q = partition(list, left, right);
		/*printf("left %d, right %d, pivot(value)%d :: ", left, right, list[q]);*/
		/*print_list(list, LIST_SIZE);*/
		quickSort(list, left, q - 1);
		quickSort(list, q + 1, right);
	}
}

int partition(int list[], int left, int right)
{
	int pivot;
	int low = left, high = right + 1;
	pivot = list[left];
	
	do {
		do
			low++;
		while (low <= right && list[low] < pivot);
		do
			high--;
		while (high >= left && list[high] > pivot);
		if (low < high)
			swap(&list[low], &list[high]);
	} while (low < high);
	
	swap(&list[left], &list[high]);
	return high;
}

/*void print_list(int list[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n");
}*/

void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
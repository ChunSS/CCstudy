#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
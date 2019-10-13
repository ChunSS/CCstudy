#include <stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);

	while (num >= 1200)
	{
		num -= 1200;
		printf("%d\n", num);
	}
}
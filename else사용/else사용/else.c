#include <stdio.h>
int main()
{
	char a;
	scanf_s("%c", &a);

	if (a == 'a')
	{
		printf("a입니다.\n");
	}
	else
	{
		printf("a가 아닙니다.\n");
	}
	return 0;
}
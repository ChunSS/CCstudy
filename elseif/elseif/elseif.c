#include <stdio.h>
int main()
{
	char c1;
	scanf_s("%c", &c1);

	if (c1 != 'k')
	{
		printf("��\n");
	}
	else if (c1 == 'k')
	{
		printf("����\n");
	}

	if (c1 > 'h')
	{
		printf("��\n");
	}
	else if (c1 <= 'h')
	{
		printf("����\n");
	}
	if (c1 <= 'o')
	{
		printf("��\n");
	}
	else if (c1 > 'o')
	{
		printf("����\n");
	}
	return 0;
}
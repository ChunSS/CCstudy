#include <stdio.h>
int main()
{
	char c1;
	scanf_s("%c", &c1);

	if (c1 != 'k')
	{
		printf("Âü\n");
	}
	else if (c1 == 'k')
	{
		printf("°ÅÁş\n");
	}

	if (c1 > 'h')
	{
		printf("Âü\n");
	}
	else if (c1 <= 'h')
	{
		printf("°ÅÁş\n");
	}
	if (c1 <= 'o')
	{
		printf("Âü\n");
	}
	else if (c1 > 'o')
	{
		printf("°ÅÁş\n");
	}
	return 0;
}
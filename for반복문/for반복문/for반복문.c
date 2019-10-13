#include <stdio.h>
int main()
{
	char c1;

	scanf_s("%c", &c1);

	for (int i = c1; i <= 'z'; i++)
	{
		printf("%c", i);
	}
}
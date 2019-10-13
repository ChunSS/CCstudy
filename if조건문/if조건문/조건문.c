#include <stdio.h>
int main()
{
	int age;

	scanf_s("%d", &age);

	if (age < 18)
	{
		printf("청소년 관람 불가\n");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= 0 && c <= 100 && d >= 0 && d <= 100)
	{
		if ((a + b + c + d) / 4 >= 85)
		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}
	else
	{
		printf("잘못된 점수\n");
	}
}
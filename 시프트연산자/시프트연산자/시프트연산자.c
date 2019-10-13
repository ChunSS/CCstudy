#include <stdio.h>
int main()
{
	unsigned long long num1;
	scanf_s("%llu", &num1);

	num1 = num1 << 20 >> 4;
	printf("%llu\n", num1);
	return 0;
}
#include <stdio.h>
int main()
{
	unsigned int num1, num2;
	scanf_s("%u %u", &num1, &num2);

	printf("%u\n", num1^num2);
	printf("%u\n", num1 | num2);
	printf("%u\n", num1&num2);
	num1 = ~num1;
	printf("%u", num1);
	return 0;
}
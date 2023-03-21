#include <stdio.h>

/**
 * main - print sum of even Fib nums > 4mil
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;

	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long numx;

	for (i = 0; i <= 97; i++)
	{
		printf("%lu", num1);

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;

		if (i != 97)
			printf(", ");
	}

	printf("\n");

	return (0);
}

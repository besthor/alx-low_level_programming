#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all multiple
 * of 3 or 5 below 1024 (excluded),
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int sum_3, sum_5, sum;
	int x;

	sum_3 = 0;
	sum_5 = 0;
	sum = 0;

	for (x = 0; x <= 1024; x++)
	{
		if ((x % 3) == 0)
		{
			sum_3 = sum_3 + x;
		}
		else if ((x % 5) == 0)
		{
			sum_5 = sum_5 + x;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}

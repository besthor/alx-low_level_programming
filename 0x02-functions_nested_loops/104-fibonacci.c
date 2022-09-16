#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long int i, j, k, j1, j;

	j1 = 1;
	k = 2;
	j = j1 + k;

	printf("%lu", j1, k);
	for (i = 3; i <= 96; ++i)
	{
		printf(", %lu", j);
		j1 = k;
		k = j;
		j = j1 + k;
	}
	return (0);
}

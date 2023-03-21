#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, j = 1, k = 2, t;

	/* print first 2 numbers of Fibonacci sequence */
	printf("%lu, %lu", j, k);

	/* generate and print next 96 numbers of Fibonacci sequence */
	for (i = 3; i <= 98; i++)
	{
		t = j + k;
		printf(", %lu", t);
		j = k;
		k = t;
	}

	/* print newline character */
	printf("\n");

	return (0);
}

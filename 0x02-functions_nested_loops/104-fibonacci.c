#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0 always
 */
int main(void)
{
	/* Declararing variables */
	unsigned long int i, j, k, j1, j2, k1, k2;

	/* Initializing variables j and k to 1 and 2 respectively */
	j = 1;
	k = 2;
	/* Printing the first number of the Fibonacci sequence */
	printf("%lu", j);
	/* Generating and printing the next 90 numbers of the Fibonacci sequence */
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	/**
	 * Calculate the upper and lower 9 digitsof the 91st and 92nd
	 * numbers in the sequence
	 */
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	/* Generate and print the remaining 7 numbers in the sequence */
	for (i = 92; i < 99; ++i)
	{
		/* Print the upper 9 digits of the number */
		printf(", %lu", k1 + (k2 / 1000000000));
		/* Print the lower 9 digits of the number */
		printf("%lu", k2 % 1000000000);
		/* Update the variables to calculate the next number in the sequence */
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	/* Print a newline character */
	printf("\n");
	/* return 0 to indicate successful execution */
	return (0);
}

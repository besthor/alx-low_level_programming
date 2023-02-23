#include <stdio.h>

/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on Success
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i;
	unsigned long large_prime;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			large_prime = i;
			num /= large_prime;
		}
	}
	printf("%lu\n", large_prime);
	return (0);
}

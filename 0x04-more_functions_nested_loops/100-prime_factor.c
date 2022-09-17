#include <stdio>

/**
 * main -  prints the largest prime factor of a number
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int a = 2;
	unsigned long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}

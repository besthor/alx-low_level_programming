#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all multiple
 * of 3 or 5 below 1024 (excluded),
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	int b = 0;

	for (a = 0, a < 1024; a++)
	{
		if (a % 3 == 0  ||  a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}

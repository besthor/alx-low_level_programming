#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: integer argument
 * Description: numbers seperated by commas
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}

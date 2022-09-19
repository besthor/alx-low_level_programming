#include <stdio.h>
#include "main.h"

/**
 * print_array - this function prints n elements of an array of integers.
 * @a: pointer parameter
 * @n: integer variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(",");
	}
	printf("\n");
}

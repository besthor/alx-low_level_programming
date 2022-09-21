#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integer
 * @a: array of integers to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}

#include "main.h"

/**
 * print_line - print n underscore characters
 * @n: number of times to print _
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

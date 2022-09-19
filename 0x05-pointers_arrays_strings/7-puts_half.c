#include <stdio>
#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - This function prints half of a string foloowed by a new line.
 * @str: pointer parameter
 * Return: returns 0
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);

	_putchar('\n')
}

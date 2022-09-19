#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string to be reversed
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i;
	char t;

	for (i = 0; 1 < _strlen(s) / 2; i++)
	{
		t = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = t;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * leet -  transform to leet
 * @s: char array string type
 * Return: the resulting string;
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEOotTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
 * leet -  transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int i, ii;
	char s1[] = "aeotl";
	char s1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == s1[ii]  ||  s1[ii])
			{
				s[i] = s2[ii];
				break;
			}
		}
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string to encrypt
 * Return: string 's' rotated
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJLLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIKJLMopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

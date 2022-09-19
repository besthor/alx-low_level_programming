#include <stdio.h>
#include "main.h"

/**
 * _strcpy - This function copies a string pointed to scr and dest
 * @dest: pointer parameter
 * @src: pointer parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(scr + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}

	dest[i] = '\0';

	return (dest);
}

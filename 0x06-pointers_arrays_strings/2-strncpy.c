#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string starting from index 0 of 'dest'
 * @dest: destination to copy string
 * @src: source to copy string
 * @n: number of chars to copy over
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

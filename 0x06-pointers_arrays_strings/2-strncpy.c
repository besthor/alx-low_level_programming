#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string starting from index 0 of 'dest'
 * @dest: destination to copy string
 * @src: source to copy string
 * @n: number of chars to copy over
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = scr[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}

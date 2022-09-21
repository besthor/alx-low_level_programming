#include "main.h"

/**
 * _strncpy - Copy a string starting from index 0 of 'dest'
 * @dest: destination to copy string
 * @src: soure to copy string
 * @n: number of chars to copy over
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = scr[x];
	}
	for (; n > x; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

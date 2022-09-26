i#include "main.h"

/**
 * *_memset - fills memory with a constant byte,
 * @s: address to memory area.
 * @b: char to be used.
 * @n: number of bytes to the memory block.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

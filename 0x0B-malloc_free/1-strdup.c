#include "main.h"
#include "string.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len;

	len = strlen(str);

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		str = ""; /* Checking for malloc */
	}

	while (i < len)
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}

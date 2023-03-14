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
	int i;
	int len;

	len = strlen(str);

	if (str == NULL)
		return (NULL);

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL); /* Checking for malloc */
	}

	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}

	ptr[len] = '\0';

	return (ptr);
}

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

	/* checking if the string is a NULL */
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	/* allocating memory for the new string */
	ptr = malloc(sizeof(char) * (len + 1));

	/* checking if memory was succesfull */
	if (ptr == NULL)
		return (NULL);

	/* copying the contents of the string to the new string */
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}

	/* adding the NULL terminator character */
	ptr[len] = '\0';

	/* return the pointer to the new string */
	return (ptr);
}

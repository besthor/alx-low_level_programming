#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1:First string
 * @s2:Second string
 *
 * Return: NULL in case of failure , but pointer to new string in
 * case of success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}

	ptr[len1 + len2] = '\0';
	return (ptr);
}

#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, c;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (c = 0; nots[c] != '\0';ct '\0

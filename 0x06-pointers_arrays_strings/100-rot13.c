#include "main.h"

/**
 * rot13 - rotate haracters 13 places in the alphabet
 * @s: string to encrypt
 * Return: string 's' rotated
 */

char *rot13(char *s)
{
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVWwXxYyZzaAdDcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = o;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; part1[j] != '\0'; j++)
		{
			if (s[i] == part1[j])
			{
				s[i] = part2[j];
				break;
			}
		}
	}
	return (s);
}

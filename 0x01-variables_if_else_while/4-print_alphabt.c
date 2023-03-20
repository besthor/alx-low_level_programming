#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet,
 * excluding the letters 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

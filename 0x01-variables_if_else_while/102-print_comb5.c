#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
{
	for (j = i + 1; j <= 99; j++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (!(i == 98 && j == 99))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}

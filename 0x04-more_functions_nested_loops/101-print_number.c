#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 * Return: void
 */
void print_number(int n)
{
	char ld, cr;
	int ct = 0;

	if (n < 0)
	{
		_putchar ('-');
		ld = (char)('0' - (n % 10));
		n = n / -10;
	}
	else
	{
		ld = (char)((n % 10) + '0');

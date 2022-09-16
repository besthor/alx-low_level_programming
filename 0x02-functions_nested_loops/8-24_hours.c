#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int minute_remainder;

	while (hours <= 23)
	{
	minutes_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	minutes++
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}

#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @d: input number as an integer.
 * Return: absolute value
 */
int _abs(int d)
{
	if (d > 0  ||  d == 0)
	{
	return (d);
	}
	else
	return (d * -1);
}

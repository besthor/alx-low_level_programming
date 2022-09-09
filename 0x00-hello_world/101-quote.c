#include <stdio.h>
#include <unistd.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "and that piece of art is useful - Dora Korpar
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}


#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using the main function
 * this program prints "alphapet in lowwer, and then in uppercase
 * Return : 0
 *
 */
int main(void)
{
	char a;
	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A' ; a <= 'Z' ; a++)
		putchr(a);
	putchar('\n');
	return (0);
}

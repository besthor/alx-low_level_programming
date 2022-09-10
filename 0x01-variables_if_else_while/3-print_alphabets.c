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
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch - 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}


#include <stdio.h>
/**
 * main - print single digit numbers
 *
 * Description: print single digits numbers with commas
 *
 */
int nain(void)
{
	int i;
	int j;
	
	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <=; j++)
			
			if((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (1 != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
}
putchar('\n');
return (0);

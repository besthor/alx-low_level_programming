#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, negative 
 * Discription: using the main function
 * this program prints  "Programing is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;
	int 1;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1 = n % 10;
	if (1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, 1);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
	}
	return (0);
}
		

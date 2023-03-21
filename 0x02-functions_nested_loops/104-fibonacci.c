#include <stdio.h>

/**
 * main - print sum of even Fib nums > 4mil
 *
 * Return: 0 on Success
 */
int main(void)
{
    int i;
    unsigned long num1 = 1;
    unsigned long num2 = 2;
    unsigned long numx;

    printf("%lu, %lu", num1, num2);
    for (i = 1; i <= 91; i++)
    {
        numx = num1 + num2;
        printf(", %lu", numx);

        num1 = num2;
        num2 = numx;
    }
    printf("\n");

    return 0;
}

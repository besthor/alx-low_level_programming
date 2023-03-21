#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0 always
 */
int main(void)
{
    unsigned long int i, j = 1, k = 2;
    unsigned long int j1, j2, k1, k2;

    printf("%lu", j);
    for (i = 1; i < 91; i++)
    {
        printf(", %lu", k);
        k += j;
        j = k - j;
    }

    j1 = j / 1000000000;
    j2 = j % 1000000000;
    k1 = k / 1000000000;
    k2 = k % 1000000000;

    for (i = 92; i < 100; i++)
    {
        printf(", %010lu", k1 + k2 / 1000000000);
        printf("%010lu", k2 % 1000000000);

        k1 += j1;
        j1 = k1 - j1;
        k2 += j2;
        j2 = k2 - j2;
    }

    printf("\n");

    return 0;
}

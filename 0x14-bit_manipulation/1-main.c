#include <stdio.h>

#include "main.h"



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

    print_binary(0);

    printf("\n");

    print_binary(1);

    printf("\n");

    print_binary(98);

    printf("\n");

    print_binary(1024);

    printf("\n");

    print_binary((1 << 10) + 1);

    printf("\n");

    return (0);

}

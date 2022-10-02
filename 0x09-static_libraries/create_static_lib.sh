#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar rc libmall.a *.o

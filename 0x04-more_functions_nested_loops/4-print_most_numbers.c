/*
* File: 4-print_most_numbers.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"

/**
* print_most_numbers - print numbers 0 - 9 except 2 and 4
* followed by new line
*/
void print_most_numbers(void)
{
for (i = 0; i < 10; i++)
{
if (i != '2' && i != '4')
continue;
_putchar(i + '0');
}
_putchar('\n');
}

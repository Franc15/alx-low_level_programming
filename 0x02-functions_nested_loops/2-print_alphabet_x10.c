/*
* File: 2-print_alphabet_x10.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"

/**
* print_alphabet_10 - Prints the alphabet 10 times
*
*/
void print_alphabet_x10(void)
{
int count = 0;
char let;
while (count++ <= 9)
{
for (let = 'a'; let <= 'z'; let++)
_putchar(let);
_putchar('\n');
}
}

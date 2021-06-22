/*
* File: 1-alphabet.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"
/**
* print_alphabet - Prints the letters of alphabet
*
*/

void print_alphabet(void)
{
char let;
for(let = 'a';let <= 'z';let++)
_putchar(let);
_putchar('\n');
}

/*
* File: 2-print_alphabet_x10.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"

/**
* print_alphabet_10 - Prints the alphabet 10 times
*/

void print_alphabet_x10(void)
{
char letter;
for (int i = 0; i <10; i++)
{
for(letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}

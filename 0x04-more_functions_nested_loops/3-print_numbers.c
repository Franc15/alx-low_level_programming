/*
* File: 3-print_numbers.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"

/**
* print_numbers - prints the numbers 0-9
* 
* Return: Always 0
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
_putchar((i%2) + '0');
_putchar('\n');
}

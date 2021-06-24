#include "holberton.h"

/**
* more_numbers - print numbers 0-14 ten times
* followed by new line
*/
void more_numbers(void)
{
int times;
for (times = 0; times < 10; times++)
{
int i;
for (i = 0; i < 15; i++)
_putchar(i + '0');
_putchar('\n');
}
_putchar('\n');
}

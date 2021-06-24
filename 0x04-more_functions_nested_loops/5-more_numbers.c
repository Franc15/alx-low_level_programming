#include "holberton.h"

/**
* more_numbers - print numbers 0-14 ten times
* followed by new line
*/
void more_numbers(void)
{
int times = 10;
while (times-- > 0)
{
int i;
for (i = 0; i < 15; i++)
_putchar(i + '0');
_putchar('\n');
}
_putchar('\n');
}

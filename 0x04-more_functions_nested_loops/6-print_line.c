#include "holberton.c"

/**
* print_line - print lines with response to arguments passed to it
* followed by new line
* @n: Number of line to be printed
*/

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
else
_putchar('\n');
}

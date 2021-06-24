/*
* File: 0-isupper.c
* Auth: Francis Kikulwe
*/

#include "holberton.h"

/**
*  _isupper - checks if character is uppercase or not
*             returns 1 if uppercase and 0 if not
*
* Return: Always 0
*/

int _isupper (int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

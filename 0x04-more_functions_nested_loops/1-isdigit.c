/*
 * File: 1-isdigit.c
 * Auth: Francis Kikulwe
 */

#include "holberton.h"

/**
* _isdigit - checks if an inout is a digit or not
*           return 1 if digit and 0, otherwise
*
* Return: Always 0
*/
int _isdigit(int c)
{
if(c >= 0 && c <= 9)
return(1);
else
return(0);
}

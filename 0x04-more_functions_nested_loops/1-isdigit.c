#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check for digit
 * @c: the char in question
 *
 * Description: take a char and determine wether it is a digit or not
 *
 * Return: 0 or 1 based on results
 */

int _isdigit(int c)
{
	int r;

	if (isdigit(c))
		r = 1;
	else
		r = 0;
return (r);
}

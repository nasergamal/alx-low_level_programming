#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - check upper
 * @c: the char in question
 *
 * Description: using std library to determine upper case letters
 *
 * Return: 0 or 1 based on results
 */

int _isupper(int c)
{
	int r;

	if (isupper(c))
		r = 1;
	else
		r = 0;
return (r);
}

#include <stdio.h>
#include <string.h>

/**
 * print_rev - takes a variable
 * @s: the string in question
 *
 * Description: take a string then print it in revers
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *d;

	int m = strlen(s) - 1, i = 0;

	for (; m >= 0; m--)
	{
		d[i] = s[m];
		i++;
	}
	*s = *d;
}

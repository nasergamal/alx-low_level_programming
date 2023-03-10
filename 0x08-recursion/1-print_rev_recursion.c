#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - takes a string and to reverse using recursion
 * @s: the string to be reversed
 *
 * Description: print a string in reverse with recursion
 *
 * Return: the new string
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s += 1);
	s--;
	_putchar(*s);

}

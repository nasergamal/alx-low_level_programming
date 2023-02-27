#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - takes a string
 * @s: the string in question
 *
 * Description: takes a string to reverse and print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int n = strlen(s) - 1;

	for (; n >= 0; n--)
		printf("%c", s[n]);
	
	putchar('\n');
}

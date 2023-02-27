#include <stdio.h>
#include <string.h>

/**
 * puts2 - takes a string
 * @s: string in question
 *
 * Description: takes every other character out
 *
 * Return: the remaining value
 */

void puts2(char *str s)
{
	int i, n = strlen(s);

	for (i = 0; i < n; i += 2)
		printf("%c", s[i];
}

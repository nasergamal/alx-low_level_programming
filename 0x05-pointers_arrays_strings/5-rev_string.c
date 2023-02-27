#include <stdio.h>
#include <string.h>

/**
 * rev_string - takes a variable
 * @s: the string in question
 *
 * Description: take a string then print it in reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char d = *s;

	int m = strlen(s) - 1, i = 0;

	for (; m >= 0; m--)
	{
		s[i] = d[m];
		i++;
	}
}

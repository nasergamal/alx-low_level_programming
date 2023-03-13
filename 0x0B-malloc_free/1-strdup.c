#include <stdlib.h
>
/**
 * _strdup - takes a string and return a pointer to a space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: string
 */

char *_strdup(char *str)
{
	int i;

	char *s;

	s = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}

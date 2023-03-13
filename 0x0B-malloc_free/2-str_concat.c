#include <stdlib.h>

/**
 * str_concat - concatenate two strings and return a pointer to space in memory
 * containing the new string
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, n;

	char *s;

	s = malloc(sizeof(s1) + sizeof(s2));
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (n = 0; s2[n] != '\0'; n++)
		s[i + n] = s2[n];
	s[i + n] = '\0';

	return (s);
}

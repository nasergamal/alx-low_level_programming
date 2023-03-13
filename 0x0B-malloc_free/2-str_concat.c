#include <stdlib.h>

int len(char *c);

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

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	s = malloc((len(s1) + len(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (n = 0; s2[n] != '\0'; n++)
		s[i + n] = s2[n];
	s[i + n] = '\0';

	return (s);
}
/**
 * len - measure string length
 * @c: thhe string
 *
 * Return: length
 */
int len(char *c)
{
	int a;

	for (a = 0; c[a] != '\0'; a++)
		;
	return (a);
}

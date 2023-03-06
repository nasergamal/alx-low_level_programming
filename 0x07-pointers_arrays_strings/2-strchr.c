#include <stdio.h>

/**
 * _strchr - search for the first occurrence of a character
 * @s: the string to be searched
 * @c: the charcter we are looking for
 *
 * Description: a function that the first occurrence of a character in string s
 *
 * Return: a pointer to said occurrence OR NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

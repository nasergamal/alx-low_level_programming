#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locate a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the strings s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0;; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == '\0')
		{
			return (NULL);
		}
	}
}

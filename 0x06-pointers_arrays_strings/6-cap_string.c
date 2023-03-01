#include "main.h"
/**
 * cap_string - capitalize a string
 * @s: the string
 *
 * Description: capitalize words following certain character
 *
 * Return: the new string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
			|| s[i] == ',' || s[i] == ';' || s[i] == '.'
			|| s[i] == '!' || s[i] == '?' || s[i] == '"'
			|| s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}

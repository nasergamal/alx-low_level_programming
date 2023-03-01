#include <ctype.h>

/**
 * string_toupper - convert strings to uppercase
 * @s: the string asking for anger
 *
 * Description: a function that takes a string and change it to uppercase
 *
 * Return: the new string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = toupper(s[i]);
	return (s);
}

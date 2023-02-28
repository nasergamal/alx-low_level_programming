#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * _atoi - Entry point
 * @s: the string to be converted
 *
 * Description: take a string and convert it to integer
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int n, i, m = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (isspace(s[i]) || s[i] == '+')
			continue;
		else if (s[i] == '-')
			m++;
		else if (isalpha(s[i]))
			continue;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10;
			n = n + (s[i] - '0');
		}
	}
	if (m % 2 != 0)
		n = -n;
	return (n);
}

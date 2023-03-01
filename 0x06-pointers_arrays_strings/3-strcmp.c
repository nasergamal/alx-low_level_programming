#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: 1st string
 * @s2: 2nd string possibly imposter
 *
 * Description: takes two strings and compare them
 *
 * Return: result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	for (s = 0; s1[s] != '\0' || s2[s] != '\0'; s++)
	{
		if (s1[s] != s2[s])
		return (s1[s] - s2[s]);
	}
	return (0);
}

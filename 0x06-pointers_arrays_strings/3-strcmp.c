
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
	int s = 0;

	if (s1[0] != s2[0])
	     	s= s1[0] - s2[0];

	return (s);
}

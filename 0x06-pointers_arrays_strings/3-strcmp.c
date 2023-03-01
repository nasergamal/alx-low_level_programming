
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
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[0] != s2[0])
		{
			return (s1[0] - s2[0]);
		}
	}
	return (0);
}

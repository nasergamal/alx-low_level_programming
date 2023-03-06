
/**
 * _memset - takes an array and fill it with given character
 * @s: the array to be filled
 * @b: the character to be used for array filling
 * @n: the number of times the character will be added
 *
 * Description: creating a funtion similar to memset to fill an array
 *
 * Return: the canged array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

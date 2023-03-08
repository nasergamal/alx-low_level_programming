
/**
 * _strlen_recursion - strlen but with recursion
 * @s: sring to be measured
 *
 * Description: takes a string and measure its length
 *
 * Return: the count
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s += 1);
	}
	return (i);
}

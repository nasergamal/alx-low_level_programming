
/**
 * set_string - sets the value of a pointer to a char.
 * @s: the string to be changed
 * @to: the string to be copied to s
 *
 * Description: takes two strings and overwrite one with the other
 *
 * Retrun: new string
 */

void set_string(char **s, char *to)
{
	*s = to;
}

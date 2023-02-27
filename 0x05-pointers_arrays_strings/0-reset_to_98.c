#include <stdio.h>

/**
 * reset_to_98 - takes the variable to be changed
 * @n: the int to be changed
 *
 * Description: takes a pointer to an int and changed the int to another value
 *
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}

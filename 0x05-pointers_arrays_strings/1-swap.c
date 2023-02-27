#include <stdio.h>
#include "main.h"

/**
 * swap_int - take in two pointers to variables
 * @a: first variable in our swap function
 * @b: second variable in our swap function
 *
 * Description: take the two variables and swap their values
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = a + b;
	*b = a - b;
	*a = a - b;
}


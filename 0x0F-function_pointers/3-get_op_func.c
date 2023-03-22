#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - select function based on operator
 * @s: given operator
 *
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (s[0] == *ops[i].op)
			return ((*(ops + i)).f);
		i++;
	}
	return ((*(ops + i)).f);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */

int main (int ac, char *av[])
{
	int n, m, r;

	if (ac != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit (99);
        
	}
 	if ((*av[2] == '/' || *av[2] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}

	n = atoi(av[1]);
	m = atoi(av[3]);

	r = get_op_func(av[2])(n, m);
	printf("%d\n", r);
	return (0);
}

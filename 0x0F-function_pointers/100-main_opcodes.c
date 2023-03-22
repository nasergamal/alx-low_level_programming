#include <stdio.h>
#include <stdlib.h>
/**
 * main - print itself opcode
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int i, n;

	char *p = (char *) main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%x", p[i] & 0xFF);
		if (i == n - 1)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}

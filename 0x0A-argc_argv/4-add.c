#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, res = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

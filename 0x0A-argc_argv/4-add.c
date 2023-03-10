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
	int i, m, res = 0;

	char *n;

	for (i = 1; i < argc; i++)
	{
		n = argv[i];
		for (m = 0; n[m] != '\0'; m++)
		{
			if (n[m] < '0' || n[m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

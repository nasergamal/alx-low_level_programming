#include <stdio.h>
#include <stdlib.h>

void change(int *m, int *n, int s);

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: zero or one
 */

int main(int argc, char *argv[])
{
	int n = 0, m = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (m > 25)
		change(&m, &n, 25);
	if (m > 10)
		change(&m, &n, 10);
	if (m > 5)
		change(&m, &n, 5);
	if (m > 2)
		change(&m, &n, 2);
	if (m == 1)
		n += 1;
	printf("%d\n", n);
	return (0);
}
/**
 * change - complement coins calculation of main func
 * @m: remaning money
 * @n: total of coins
 * @s: Fractional Currency
 *
 * Return: nothing
 */

void change(int *m, int *n, int s)
{
	int i;

	for (i = 0; (*m - i) % s != 0; i++)
		;
	*n += (*m - i) / s;
	*m = i;
}

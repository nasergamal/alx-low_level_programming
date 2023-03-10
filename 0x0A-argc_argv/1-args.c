#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

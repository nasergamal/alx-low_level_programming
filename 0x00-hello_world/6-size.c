#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: tell me your sizes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;

int in;

long int lin;

long long int llin;

float fl;

printf("Size of a char: %lu byte(s)\n", sizeof(ch));

printf("Size of a int: %lu byte(s)\n", sizeof(in));

printf("Size of a long int: %lu byte(s)\n", sizeof(lin));

printf("Size of a long long int: %lu byte(s)\n", sizeof(llin));

printf("Size of a float: %lu byte(s)\n", sizeof(fl));

return (0);

}

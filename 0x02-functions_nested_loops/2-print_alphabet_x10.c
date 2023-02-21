#include <stdio.h>

/**
 * print_alphabet_x10 - print x10
 *
 * Description: print allover again
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
int n;
char i;
for (n = 0; i <= 9; n++)
{
for (i = 'a'; i <= 'z'; i++)
putchar(i);

putchar('\n');
}

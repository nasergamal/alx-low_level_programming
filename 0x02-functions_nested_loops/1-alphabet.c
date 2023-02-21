#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print alphas lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);

putchar('\n');
}

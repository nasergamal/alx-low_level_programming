#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - just add thing
 * @n: the start of the count
 *
 * Description: just counting
 *
 * Return: count to ninty eight
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n); 
n++;
}
while (n > 98)
{
printf("%i ", n);
n--;
}
printf('98');
printf('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: fi
 *
 * Return: always 0
 */

int main(void)
{
long int x, y, z, i, s;

x = 1, y = 2, z = 2, s = 0;

for (i = 0; i < 25; i++)
{
if (z < 4000000)
{
if (z % 2 == 0)
s += z;
}
z = x + y;

y = y + z;
x = z;
}
printf("%ld", s)
putchar('\n');
return (0);
}

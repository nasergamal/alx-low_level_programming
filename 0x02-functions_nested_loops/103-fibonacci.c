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

while (z < 4000000)
{

z = x + y;
x = y;
y = y + z;

if (z % 2 == 0)
s += z;
}
printf("%ld", s);
putchar('\n');
return (0);
}

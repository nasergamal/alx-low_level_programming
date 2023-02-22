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
if (i == 0)
{
printf("%d, %d, ", 1, 2);
}
else if (i == 24)
{
printf("%ld, %ld", x, y);
putchar('\n');
}
else
{
printf("%ld, %ld, ", x, y);
}
y = y + z;
x = z;
}
return (0);
}

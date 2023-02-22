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
int x, y, z, s;

x = 0, y = 1, z = 2, s = 0;

while (z < 4000000)
{

z = x + y;
x = y;
y = y + z;

if (z % 2 == 0)
s += z;
}
printf("%i\n:x", s);
return (0);
}

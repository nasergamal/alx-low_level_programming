#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: fi
 *
 * Return: always 0
 */

int main(void)
{
int x, y, z, i;
x = 1, y = 2;

for (i = 0; i < 50; i++)
{
z = x + y;
printf("%d, %d, ", y, z);
x = y;
y = z;
}
return (0);
}

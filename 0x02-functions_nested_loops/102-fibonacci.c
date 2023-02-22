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
x = 0, y = 1, z = 2;

for (i = 0; i < 50; i++)
{

z = x + y;

printf("%d, %d, ", x, y);
y = y + z;
x = z;
}
return (0);
}

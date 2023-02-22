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
long int x, y, z, i;

x = 1, y = 2, z = 3;

for (i = 0; i < 25; i++)
{

z = x + y;
if (i == 0)
{
printf("%d, %d, ", 1, 2);
}
else if (i == 24)
printf("%ld, %ld", x, y);
else
printf("%ld, %ld, ", x, y);
y = y + z;
x = z;
}
return (0);
}

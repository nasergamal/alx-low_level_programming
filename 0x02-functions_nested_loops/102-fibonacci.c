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
int x, y, i;
x = 0, y = 1;

for (i = 0; i < 50; i++)
{

x = y;
y = x + y;

printf("%d, %d, ", x, y);
x = y;
y = z;
}
return (0);
}

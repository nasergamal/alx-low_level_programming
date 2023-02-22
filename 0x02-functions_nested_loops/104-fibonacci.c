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
long int x, y, z;
int s;
x = 1, y = 2, z = 2, s = 0;

while (s < 24)
{
if (s < 23)
printf("%ld, %ld, ", x, y);

else 
printf("%ld, %ld\n", x, y);

z = x + y;
x = z;
y += z;

s++;
}
return (0);
}

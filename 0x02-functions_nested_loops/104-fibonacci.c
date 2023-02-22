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
int x, y, z, s;

x = 0, y = 1, z = 2, s = 0;

while (s < 24)
{
if (s > 0 && s < 23)
printf("%d, %d, ", x, y);

else if (s == 0)
printf("%d, %d, ", 1, 2);

else 	
printf("%d, %d\n", x, y); 

x = y;
y = z;
z = x + y;
}
return (0);
}

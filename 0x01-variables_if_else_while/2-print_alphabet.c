#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: aaand the first digit isss
 *
 * Return: 0 always (success)
 */

int main(void)
{
char cha;

for (cha = 'A'; cha <= 'Z'; cha += 1)
{
putchar(tolower(cha));
}

putchar('\n');

return (0);
}

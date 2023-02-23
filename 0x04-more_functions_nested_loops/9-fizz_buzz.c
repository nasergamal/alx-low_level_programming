#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: fizzbuzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	char n;

	for (i = 1; i <= 100; i++)
	{
		_putchar(' ');
		if (i % 3 == 0 && !(i % 5 == 0))
			n = "Fizz";
		else if (i % 5 == 0 && !(i % 3 == 0))
			n = "Buzz";
		else if (i % 3 == 0 && i % 5 == 0)
			n = "FizzBuzz";
		else
			n = i;
		if (i < 100 && !(i % 3 == 0 || i % 5 == 0))
			printf("%d ", i);
		else if (i < 100 && (i % 3 == 0 || i % 5 == 0))
			printf("%c ", n);
		else if (i == 100)
		{
			printf("%c", n);
			return;
		}
		_putchar(' ');
	}
}

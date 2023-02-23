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

	for (i = 1; i <= 100; i++)
	{
		if (i < 100 && !(i % 3 == 0 || i % 5 == 0))
			printf("%d ", i);
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz ");
		else if (i % 5 == 0 && !(i % 3 == 0) && !(i == 100))
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i == 100)
			printf("Buzz\n");
	}
return (0);
}

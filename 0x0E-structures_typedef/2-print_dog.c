#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog components
 * @d: struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
	if (!(d->age))
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", (d->age));
	printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
}

#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize struct dog variables
 * @d: struct
 * @name: a2
 * @age: a3
 * @owner: a4
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

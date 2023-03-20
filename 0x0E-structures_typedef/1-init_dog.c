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
	struct dog *p;

	p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}

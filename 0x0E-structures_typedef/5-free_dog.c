#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: struct
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
}

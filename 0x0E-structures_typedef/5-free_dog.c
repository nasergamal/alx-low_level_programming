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
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

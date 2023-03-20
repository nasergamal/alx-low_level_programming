#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initalize struct dog with new def
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	char *nam, *own;
	
	nam = malloc(sizeof(name));
	own = malloc(sizeof(owner));
	if (nam == NULL || own == NULL)
		return (NULL);
	nam = name;
	own = owner;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (p);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

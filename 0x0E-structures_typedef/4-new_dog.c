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

	int i, n, m;

	if (!(name) || !(owner))
		return (NULL);
	for (n = 0; name[n] != '\0'; n++)
		;
	for (m = 0; owner[m] != '\0'; m++)
		;
	p = malloc(sizeof(dog_t));
	p->name =  malloc(n + 1);
	p->owner =  malloc(m + 1);
	if (p == NULL || p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	p->age = age;
	for (i = 0; i < m; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}

#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in a double linked list at index
 * @h: list
 * @idx: index
 * @n: new node content
 *
 * Return: newnode pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr, *newptr;

	if (idx == 0)
		return (add_dnodeint(h, n));
	newptr = malloc(sizeof(dlistint_t));
	if (newptr == NULL)
		return (NULL);
	newptr->n = n;
	newptr->next = newptr->prev = NULL;
	ptr = *h;
	while (ptr != NULL)
	{
		if (i == idx)
		{
			newptr->next = ptr;
			ptr = ptr->prev;
			newptr->prev = ptr;
			ptr->next->prev = newptr;
			ptr->next = newptr;
			return (newptr);
		}
		else if (ptr->next == NULL && i == idx - 1)
		{
			free(newptr);
			return (add_dnodeint_end(h, n));
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}

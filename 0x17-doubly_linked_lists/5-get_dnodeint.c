#include "lists.h"
/**
 * get_dnodeint_at_index - find a node in a double linked list by index
 * @head: list
 * @index: index
 *
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		if (index == i)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}

#include "lists.h"

/**
 * get_nodeint_at_index - return a node
 * @head: linked list
 * @index: index of the node required
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = NULL;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}

#include "lists.h"

/**
 * listint_len - count linked list nodes
 * @h: linked list
 *
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = NULL;

	if (!h)
		return (i);
	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}

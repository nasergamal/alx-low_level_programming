#include "lists.h"
/**
 * dlistint_len - count doulbe linked list's nodes
 * @h: list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

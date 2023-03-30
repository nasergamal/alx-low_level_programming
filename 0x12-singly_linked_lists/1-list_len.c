#include "lists.h"

/**
 * list_len - count nodes in linked list
 * @h: linked list to be counted
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	unsigned long int c = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		c += 1;
		ptr = ptr->next;
	}
	return (c);
}

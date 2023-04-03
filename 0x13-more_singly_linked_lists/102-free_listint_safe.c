#include "lists.h"

/**
 * free_listint_safe - free allocated memory of a linked list with/without loop
 * @h: linked list
 *
 * Return: list size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i, n = 0;
	listint_t *ptr = NULL, *ptr2;

	i = count_nodes(*h);
	ptr = *h;
	while (n < i)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
		n++;
	}
	*h = NULL;
	return (i);

}

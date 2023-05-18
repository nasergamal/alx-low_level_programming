#include "lists.h"

/**
 * print_dlistint - print doulbe linked list content
 * @h: list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}

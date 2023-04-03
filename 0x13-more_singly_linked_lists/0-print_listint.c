#include "lists.h"
/**
 * print_listint - print the content of a single linked list
 * @h: linked list to be printed
 *
 * Return: list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = NULL;

	if (!h)
		return (i);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;

	}
	return (i);
}

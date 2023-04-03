#include "lists.h"

/**
 * print_listint_safe - print lists even if there is loop
 * @head: linked list
 *
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, n = 0;
	const listint_t *ptr;

	if (!(head))
		exit(98);
	i = count_nodes(head);
	ptr = head;
	if (i)
	{
		while (n < i)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			n++;
			ptr = ptr->next;
		}
		if (ptr)
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
	}
	return (i);
}

/**
 * count_nodes - count the number of nodes
 * @start: linked list
 *
 * Return: list size
 */
size_t count_nodes(const listint_t *start)
{
	size_t i, m = 0;
	const listint_t *ptr, *ptr2;

	ptr = ptr2 = start;
	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		if (ptr == ptr2)
		{
			m = 1;
			break;
		}
	}
	if (m)
	{
		ptr2 = start;
		while (ptr != ptr2)
		{
			ptr = ptr->next;
			ptr2 = ptr2->next;
		}
		while (ptr2->next != ptr)
			ptr2 = ptr2->next;
		ptr = start;
		for (i = 0; ptr != ptr2; i++)
			ptr = ptr->next;
		i++;
	}
	else
	{
		ptr = start;
		i = 0;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}

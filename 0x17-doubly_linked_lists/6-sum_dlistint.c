#include "lists.h"
/**
 * sum_dlistint - sum of te elements in a double linked list
 * @head: list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}

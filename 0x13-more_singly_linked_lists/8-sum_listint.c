#include "lists.h"

/**
 * sum_listint - calculate the sum of data(n) in all nodes of a linked list
 * @head: linked list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!(head))
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: linked list
 * @index: index
 *
 * Return: 1(success) or -1(failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = NULL, *ptr2;

	if (!(*head))
		return (-1);
	ptr = *head;
	while (ptr != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(ptr);
			return (1);
		}
		if (i == (index - 1))
			ptr2 = ptr;
		if (i == index)
		{
			ptr2->next = ptr->next;
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}

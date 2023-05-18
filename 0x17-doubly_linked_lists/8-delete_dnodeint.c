#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node in a double linked list at index
 * @head: list
 * @index: index
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr1, *ptr2 = NULL;

	ptr1 = *head;
	while (ptr1 != NULL)
	{
		if (index == 0)
		{
			*head = ptr1->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(ptr1);
			return (1);
		}
		else if (i == index)
		{
			ptr2 = ptr1;
			ptr1->prev->next = ptr1->next;
			if (ptr1->next != NULL)
				ptr1->next->prev = ptr1->prev;
			free(ptr2);
			return (1);
		}
		i++;
		ptr1 = ptr1->next;
	}
	return (-1);
}

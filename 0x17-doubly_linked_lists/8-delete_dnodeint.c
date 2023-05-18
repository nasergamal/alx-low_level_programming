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
			free(ptr1);
			return (1);
		}
		else if (i == index && ptr1->next == NULL)
		{
			ptr2 = ptr1;
			ptr1 = ptr1->prev;
			ptr1->next = NULL;
			return (1);
		}
		else if (i == index)
		{
			ptr2 = ptr1;
			ptr1->next->prev = ptr1->prev;
			ptr1 = ptr1->prev;
			ptr1->next = ptr2->next;
			free(ptr2);
			return (1);
		}
		i++;
		ptr1 = ptr1->next;
	}
	return (-1);
}

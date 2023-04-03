#include "lists.h"

/**
 * reverse_listint - revers a single linked list listint_t
 * @head: linked list
 *
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr2;

	if (!(*head))
		return (NULL);
	ptr = *head;
	ptr2 = ptr->next;
	ptr->next = NULL;
	*head = ptr;
	while (ptr2 != NULL)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);

}

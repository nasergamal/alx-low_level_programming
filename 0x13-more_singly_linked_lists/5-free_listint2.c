#include "lists.h"

/**
 * free_listint2 - free allocated memory in linked lists
 * @head: linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!(*head))
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr
	}
}

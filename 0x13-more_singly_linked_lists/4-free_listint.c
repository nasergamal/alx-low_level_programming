#include "lists.h"

/**
 * free_listint - free allocated memory in linked lists
 * @head: linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

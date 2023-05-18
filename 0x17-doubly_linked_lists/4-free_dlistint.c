#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

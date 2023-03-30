#include "lists.h"

/**
 * free_list - free allocated space in linked list
 * @head: list to be freed
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *ptr = NULL,  *current = NULL;

	ptr = head;
	if (ptr == NULL)
		return;
	while (ptr != NULL)
	{
		current = ptr;
		ptr = ptr->next;
		free(current->str);
		free(current);
	}
}

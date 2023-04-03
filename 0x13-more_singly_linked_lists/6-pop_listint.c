#include "lists.h"

/**
 * pop_listint - deletes the head node and return it's data
 * @head: linked list
 *
 * Return: node content
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *ptr = NULL;

	ptr = *head;
	*head = (*head)->next;
	m = ptr->n;
	free(ptr);
	return (m);
}

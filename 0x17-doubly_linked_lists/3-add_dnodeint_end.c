#include "lists.h"
/**
 * add_dnodeint_end - add a node to double linked list's end
 * @head: list
 * @n: new node content
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *ptr2;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = ptr->prev = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	ptr2 = *head;
	while (ptr2->next != NULL)
		ptr2 = ptr2->next;
	ptr->prev = ptr2;
	ptr2->next = ptr;
	return (ptr);
}

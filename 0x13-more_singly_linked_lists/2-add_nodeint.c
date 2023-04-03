#include "lists.h"

/**
 * add_nodeint - add node to the beginning of linked list
 * @head: linked list
 * @n: integer
 *
 * Return: list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}

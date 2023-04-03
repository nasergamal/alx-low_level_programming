#include "lists.h"

/**
 * add_nodeint_end - add integer to linked list's end
 * @head: linked list
 * @n: integer
 *
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ptr = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	ptr = *head;
	while (1)
	{
		if (ptr->next == NULL)
		{
			ptr->next = newnode;
			return (*head);
		}
		ptr = ptr->next;
	}
}

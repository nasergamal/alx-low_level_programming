#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node with data (n) at index
 * @head: linked list
 * @idx: index
 * @n: new node value
 *
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, m = 1;
	listint_t *newnode, *ptr = NULL, *ptr2;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		m++;
	}
	newnode = malloc(sizeof(listint_t));
	if (idx > m || newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	ptr = *head;
	while (ptr != NULL || (ptr == NULL && i == idx))
	{
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		if ((i + 1) == idx)
			ptr2 = ptr;
		if (i == idx)
		{
			newnode->next = ptr2->next;
			ptr2->next = newnode;
			return (newnode);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}

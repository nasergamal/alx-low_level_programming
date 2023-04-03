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
	unsigned int i = 0;
	listint_t *newnode, *ptr = NULL, *ptr2;

	newnode = malloc(sizeof(listint_t));
	if (!(head) || newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	ptr = *head;
	while (ptr != NULL)
	{
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (newnode);
		}
		if (i == (idx - 1))
			ptr2 = ptr;
		if (i == idx)
		{
			ptr2->next = newnode;
			newnode->next = ptr;
			return (newnode);
		}
		i++;
		ptr = ptr->next;
	}
	free(newnode);
	return (NULL);
}

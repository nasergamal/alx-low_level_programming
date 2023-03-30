#include "lists.h"

/**
 * add_node_end - insert content at a linked list's end
 * @head: linked list
 * @str: string to be added
 *
 * Return: poitner to list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned long int i;
	list_t *newNode;
	list_t *ptr = NULL;

	ptr = *head;
	for (i = 0; str[i]; i++)
		;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (1)
	{
		if (ptr->next == NULL)
		{
			ptr->next = newNode;
			break;
		}
		ptr = ptr->next;
	}
	return (*head);
}

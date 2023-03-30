#include "lists.h"

/**
 * add_node - insert content at linked list's beginning
 * @head: linked list
 * @str: string to be added
 *
 * Return: poitner to list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned long int i;
	list_t *newNode;

	for (i = 0; str[i]; i++)
		;
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

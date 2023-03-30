#include "lists.h"


/**
 * print_list - count nodes in linked list and print it's content
 * @h: linked list to be counted
 *
 * Return: count
 */
size_t print_list(const list_t *h)
{
	unsigned long int c = 0;

	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else if (ptr->str)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		c++;
		ptr = ptr->next;
	}
	return (c);
}

#include "lists.h"

/**
 * find_listint_loop - find the beginning of the loop
 * @head: linked list
 *
 * Return: pointer to first node in loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = NULL, *ptr2 = NULL;

	if (!(head))
		return (NULL);
	ptr = ptr2 = head;
	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		if (ptr == ptr2)
		{
			ptr2 = head;
			while (ptr != ptr2)
			{
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}
	return (NULL);
}

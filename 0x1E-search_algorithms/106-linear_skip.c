#include "search_algos.h"


listint_t *node_jump(listint_t *jump, size_t step);

/**
 * linear_skip - single linked list linear search
 * @list: list to be searched
 * @value: sought after value
 *
 * Return: pointer to value's node or null
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start = NULL, *jump = NULL;

	if (!list)
		return (NULL);

	start = list;
	jump = start->express;
	while (jump != NULL)
	{
		printf("Value checked array[%ld] = [%d]\n", jump->index, jump->n);

		if (jump->n < value && !jump->express)
		{
			start = jump;
			while (jump->next)
				jump = jump->next;
		}

		if (jump->n >= value || !jump->express)
			break;
		start = jump;
		jump = jump->express;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		start->index, jump->index);
	while (start)
	{
		printf("Value checked array[%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}

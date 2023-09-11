#include "search_algos.h"


listint_t *node_jump(listint_t *jump, size_t step);

/**
 * jump_list - linear jump search
 * @list: list to be searched
 * @size: linked list size
 * @value: sought after value
 *
 * Return: pointer to value's node or null
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *start = NULL, *jump = NULL;

	if (!list || size == 0)
		return (NULL);

	start = jump = list;
	step = sqrt(size);
	jump = node_jump(jump, step);
	while (jump != NULL)
	{
		printf("Value checked array[%ld] = [%d]\n", jump->index, jump->n);
		if (jump->n >= value || !jump->next)
			break;
		start = jump;
		jump = node_jump(jump, step);
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
/**
 * node_jump -  move through nodes a number of steps
 * @jump: array
 * @step: number of nodes to jump
 *
 * Return: node
 */
listint_t *node_jump(listint_t *jump, size_t step)
{
	while (jump->next && step)
	{
		jump = jump->next;
		step -= 1;
	}
	return (jump);
}

#include "search_algos.h"

/**
 * linear_skip - This function searches for a value in a sorted
 * skip list of integers
 * @list: ptr to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: returns a pointer on the first node where value is located
 * or NULL if value is not present in list or if head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	if (list == NULL)
		return (NULL);
	curr = list;
	while (curr->express != NULL && curr->n < value)
	{
		prev = curr;
		curr = curr->express;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}
	if (curr->express == NULL)
	{
		prev = curr;
		while (curr->next != NULL)
			curr = curr->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
	while (prev->index <= curr->index && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

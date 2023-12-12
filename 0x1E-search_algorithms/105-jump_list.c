#include "search_algos.h"

/**
 * jump_list - This function that searches for a value
 * in a sorted list of integers using the Jump search algorithm
 * @list: ptr to the head of the list to search in
 * @size: num of nodes in list
 * @value: value to search for
 *
 * Return: returns a pointer to the first node where value is located,
 * or NULL if value is not present in head or if head is NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, j, jump;
	listint_t *curr, *prev;

	if (list == NULL || size == 0)
		return (NULL);
	jump = sqrt(size);
	curr = list;
	prev = list;
	for (i = 0; curr->n < value && curr->next != NULL; i += jump)
	{
		prev = curr;
		for (j = 0; j < jump && curr->next != NULL; j++)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n", i, curr->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	curr = prev;
	while (curr->n < value && curr->next != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, curr->n);
		curr = curr->next;
		i++;
	}
	printf("Value checked at index [%lu] = [%d]\n", i, curr->n);
	if (curr->n == value)
		return (curr);
	return (NULL);
}

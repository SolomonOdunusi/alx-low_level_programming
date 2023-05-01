#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list and sets the head to NULL.
 * @h: A pointer to a pointer to the head of the linked list.
 * Return: returns the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size_list = 0;
	listint_t *curr;

	while (*h)
	{
		if (*h <= (*h)->next)
		{
		/* Cycle detected, exit with error */
		*h = NULL;
		exit(98);
		}
		curr = (*h)->next;
		free(*h);
		size_list++;
		*h = curr;
	}

	return (size_list);
}

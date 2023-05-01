#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list of integers.
 * @h: A pointer to the head of the linked list.
 * Return: It returns the number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	for (num_node = 0; h != NULL; h = h->next, num_node++)
	{
		printf("%d\n", h->n);
	}
	return (num_node);
}

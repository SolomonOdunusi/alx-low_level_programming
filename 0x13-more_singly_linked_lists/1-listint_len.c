#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 * Return: it returns the number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem;

	for (num_elem = 0; h; num_elem++)
	{
		h = h->next;
	}
	return (num_elem);
}

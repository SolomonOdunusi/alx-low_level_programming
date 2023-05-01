#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: it returns the adds of all the data in list else 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *present_node;
	int total;

	present_node = head;
	total = 0;

	while (present_node != NULL)
	{
		total += present_node->n;
		present_node = present_node->next;
	}

	return (total);
}

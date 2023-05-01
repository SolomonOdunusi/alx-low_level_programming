#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be returned.
 * Return: returns pointer to the nth node else NULL if no node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present_node;
	unsigned int i;

	present_node = head;

	for (i = 0; i < index && present_node != NULL; i++)
	{
		present_node = present_node->next;
	}

	return (present_node);
}

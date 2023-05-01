#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: returns a freed up list
 */
void free_listint(listint_t *head)
{
	listint_t *present_node;

	while (head)
	{
		present_node = head;
		head = head->next;
		free(present_node);
	}
}


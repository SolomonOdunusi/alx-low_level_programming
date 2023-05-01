#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: returns freed up list
 */
void free_listint2(listint_t **head)
{
	listint_t *present_node;

	while (*head)
	{
		present_node = *head;
		*head = (*head)->next;
		free(present_node);
	}

	*head = NULL;
}


#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: it returns the data of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	int data;

	if (*head == NULL)
		return 0;

	curr_node = *head;
	*head = (*head)->next;
	data = curr_node->n;
	free(curr_node);

	return data;
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of the list
 * @head: pointer to head of list
 * @n: integer to be included in new node
 * Return: returns the address of new element else NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node = malloc(sizeof(struct dlistint_s *));

	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}

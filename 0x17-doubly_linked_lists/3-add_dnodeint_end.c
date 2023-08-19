#include "lists.h"

/**
 * add_dnodeint_end - this func adds a new node at the end of a list
 * @head: pointer to head of list
 * @n: integer to be included in new node
 * Return: returns the address of new element else NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node = malloc(sizeof(struct dlistint_s *));
	struct dlistint_s *last_node;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}

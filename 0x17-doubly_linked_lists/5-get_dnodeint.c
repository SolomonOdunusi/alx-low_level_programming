#include "lists.h"

/**
 * get_dnodeint_at_index - the func returns the nth node of the list
 * @head: pointer to head of list
 * @index: index of the node, starting from 0
 * Return: returns the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

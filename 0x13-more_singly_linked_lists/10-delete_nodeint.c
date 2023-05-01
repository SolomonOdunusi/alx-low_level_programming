#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: the position.
 * Return: it returns the address of the new node else returns NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *present;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	present = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (present->next == NULL)
		{
			return (-1);
		}
		present = present->next;
	}

	curr = present->next;
	if (curr == NULL)
	{
		return (-1);
	}

	present->next = curr->next;
	free(curr);
	return (1);
}


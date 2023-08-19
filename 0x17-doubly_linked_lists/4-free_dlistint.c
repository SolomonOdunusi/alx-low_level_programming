#include "lists.h"

/**
 * free_dlistint - the funcfrees the dlistint_t list
 * @head: pointer to head of list
 * Return: free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

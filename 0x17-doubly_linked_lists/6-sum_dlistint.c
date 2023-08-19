#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list
 * @head: pointer to head of list
 * Return: returns the sum of all the data of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

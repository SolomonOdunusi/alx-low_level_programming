#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: returns the number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *check;
	size_t count, i;

	count = 0;

	if (!head)
		exit(98);

	temp = head;

	while (temp)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;

		check = head;
		for (i = 0; i < count; i++)
		{
			if (temp == check)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			check = check->next;
		}
	}

	return (count);
}

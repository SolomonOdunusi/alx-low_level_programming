#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: returns the address of the node where the loop starts else returns NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
		slow_ptr = head;

		while (slow_ptr != fast_ptr)
		{
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}

		return (slow_ptr);
		}
	}

	return (NULL);
}


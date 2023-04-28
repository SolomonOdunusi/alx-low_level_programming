#include "list.h"

/**
 * free_list - Frees a linked list_t list
 * @head: Pointer to the beginning of the list
 * Return: freed up space
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

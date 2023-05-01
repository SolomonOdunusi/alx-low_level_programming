#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint(&head, 1);
	add_nodeint(&head, 10);
	add_nodeint(&head, 100);
	add_nodeint(&head, 1000);
	add_nodeint(&head, 10000);
	add_nodeint(&head, 100000);
	add_nodeint(&head, 1000000);
	add_nodeint(&head, 10000000);
	print_listint(head);
	return (0);
}

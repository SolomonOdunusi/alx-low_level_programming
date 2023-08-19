#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of th list
 * @head: pointer to head of list
 * @index: index of the node that should be deleted
 * Return: returns 1 if success else -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        unsigned int count = 0;
        dlistint_t *temp = *head;

        if (head == NULL || *head == NULL)
                return (-1);

        if (index == 0)
        {
                *head = temp->next;
                if (temp->next != NULL)
                        temp->next->prev = NULL;
                free(temp);
                return (1);
        }

        while (temp != NULL)
        {
                if (count == index)
                {
                        temp->prev->next = temp->next;
                        if (temp->next != NULL)
                                temp->next->prev = temp->prev;
                        free(temp);
                        return (1);
                }
                count++;
                temp = temp->next;
        }
        return (-1);
}

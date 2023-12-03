#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - Deletes a new node at a given position
 *
 * @head: Pointer to pointer to dlistint_t list
 * @index: Index of the list where the new node should be added
 *
 * Return: A new list with deleted nodes, else NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevN;
	dlistint_t *nextN = *head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (nextN == NULL)
		{
			return (-1);
		}
		*head = nextN->next;
		if (nextN->next != NULL)
		{
			nextN->next->prev = NULL;
		}
		free(nextN);
		return (-1);
	}
	while (i < index && nextN != NULL)
	{
		nextN = nextN->next;
	/*traverse up to the node at n position from beginning*/
		i = i + 1;
	}
	if (nextN == NULL)
	{
		return (-1);
	}
	prevN = nextN->prev;
	prevN->next = nextN->next;
	if (nextN->next != NULL)
	{
		nextN->next->prev = prevN;
	}
	free(nextN);
	return (1);
}

#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returs the nth node of a dlistint_t list
 * @head: the pointer to the dlistint_t list
 * @index: the index of the node starting from 0
 *
 * Return: the pointer to the Nth node of the list or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	i = 0;
	ptr = head;
	if (head != NULL)
	{
		while (ptr != NULL)
		{
			if (i == index)
			{
				return (ptr);
			}
			ptr = ptr->next;
			i++;
		}
		return (NULL);
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 *
 * @h: Head of the list
 *
 * Return: The elements of the list and the number of nodes, else 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i = i + 1;
	}
	return (i);
}

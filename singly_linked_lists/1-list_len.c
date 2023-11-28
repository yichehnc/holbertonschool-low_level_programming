#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 *
 * @h: Head of the list
 *
 * Return: Number of element, else 0.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

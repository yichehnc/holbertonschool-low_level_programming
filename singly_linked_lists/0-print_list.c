#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * 
 * @h: Head of the list
 * 
 * Return: The element of the list and the number of nodes, else 0.
 */

size_t print_list(const list_t *h)
{
	       size_t i;

	       i = 0;

	       if (h == NULL)
	       {
			return(0);
	       }

	       while (h != NULL)
	       {
			if (h ->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
			i = i + 1;
	       }
	       return (i);
}

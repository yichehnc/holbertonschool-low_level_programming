#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 *
 * @head: Head of the list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 *
 * @head: Head of the list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
	}
}

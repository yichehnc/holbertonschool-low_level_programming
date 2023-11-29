#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 *
 * @head: Head of the list
 * @str: Input string
 *
 * Return: The address of the new element, else NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewEnd;
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(*temp));
		if (temp == NULL)
		{
			return (0);
		}
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			NewEnd = *head;
			while (NewEnd->next != NULL)
			{
				NewEnd = NewEnd->next;
			}
			NewEnd->next = temp;
		}
		return (temp);
	}
	return (NULL);
}

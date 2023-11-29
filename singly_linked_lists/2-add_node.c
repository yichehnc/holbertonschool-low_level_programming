#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 *
 * @head: Head of the list
 * @str: Input string
 *
 * Return: The address of the new element, else return NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;

	if (head != NULL && str != NULL)
	{
		NewNode = malloc(sizeof(*NewNode));
		if (NewNode == NULL)
		{
			return (0);
		}
		NewNode->str = strdup(str);
		NewNode->len = strlen(str);
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 *
 * @head: Head of the list
 * @n: Input integer
 *
 * Return: The address of the new element, else NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewStart;

	if (head != NULL)
	{
		NewStart = malloc(sizeof(*NewStart));
		if (NewStart == NULL)
		{
			return (0);
		}
		NewStart->n = n;
		NewStart->next = *head;
		NewStart->prev = NULL;
		if (*head != NULL)
		{
			(*head)->prev = NewStart;
		}
		*head = NewStart;
		return (NewStart);
	}
	return (NULL);
}

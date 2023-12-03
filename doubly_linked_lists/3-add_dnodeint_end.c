#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 *
 * @head: pointer to a pointer to dlistint_t list
 * @n: Input integer of the new node
 *
 * Return: The address of the new element, else NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;/*new is the last in the list*/
	new->prev = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
		new->prev = ptr;
		return (new);
	}
}

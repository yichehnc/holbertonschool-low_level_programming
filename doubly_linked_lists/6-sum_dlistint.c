#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all n of a dlistint_t list
 * @head: the pointer to the dlistint_t list
 *
 * Return: the sum of all the n of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	sum = 0;
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n; /*sum = sum + ptr->n*/
		ptr = ptr->next;
	}
	return (sum);
}

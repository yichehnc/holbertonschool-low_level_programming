#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_print - A function that prints a hash table
 *
 * @ht: hash table to be printed
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count;
	hash_node_t *node_ptr;

	if (ht == NULL)/* Checks if hash table is empty*/
	{
		return;
	}
	index = count = 0;
	printf("{");
	while (index < ht->size)
	{
		node_ptr = ht->array[index];
		while (node_ptr != NULL)
		{
			if (count != 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node_ptr->key, node_ptr->value);
			count++;
			node_ptr = node_ptr->next;
		}
		index++;
	}
	printf("}\n");
}

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table we want to look into
 * @key: the key of hash table
 *
 * Return: value associated with the element, else NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);

	while (ht->arry[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		ht->array[i] = ht->array[i]->next;
	}
	return (NULL);
}

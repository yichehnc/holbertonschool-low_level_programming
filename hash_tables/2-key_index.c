#include "hash_tables.h"
/**
 * key_index - Gives the index of a key
 *
 * @key: Key of the hash tables
 * @size: Size of the array
 *
 * Return: The index at which the key/value pair stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int i;

	if (key == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}

	hash = hash_djb2(key);
	i = hash % size;
	return (i);
}

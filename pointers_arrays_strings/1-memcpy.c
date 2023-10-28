#include "main.h"

/**
 * *_memcpy - A function that copies n bytes from memory area src to dest.
 *
 * @dest: destination memory
 * @src: source memory
 * @n: size of memory copied from src to dest.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src to the buffer
 * pointed to by dest.
 *
 * @dest: pointer pointing to the destination that stores the copied string
 * @src: address of the string to be copied
 *
 * Return: (p) the pointer to dest.
 */
char *_strcpy(char *dest, char *src);
{
	char *p = dest;

	while (src != '\0')
	{
		dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	dest = '\0'; /* Null terminate the copied string */
	return (p);
}

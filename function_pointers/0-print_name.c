#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints name
 *
 * @f: pointer to function
 * @name: input name
 *
 * Return: Returns name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

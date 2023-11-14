#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the struct dog
 *
 * @d: struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age >= 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: str to be duplicated
 *
 * Return: NULL if str = NULL, string duplicated if successful
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}

	dup = malloc(i + 1);
	i = 0;

	while (str[i] != '\0')
	{
		if (dup == NULL)
		{
			return (NULL);
		}
		dup[i] = str[i];
		i = i + 1;
	}
	dup[i] = '\0';
	return (dup);
}

/**
 * new_dog - Function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails, else prints name, age and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *namecpy;
	char *ownercpy;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	namecpy = _strdup(name);
	if (namecpy == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = namecpy;
	ptr->age = age;
	ownercpy = _strdup(owner);
	if (ownercpy == NULL)
	{
		free(namecpy);
		free(ptr);
		return (NULL);
	}
	ptr->owner = ownercpy;
	return (ptr);
}

#include <stdlib.h>
#include "dog.h"

/**
 * cpy  -   Make a copy of passed in argument
 * @src:      Data to make copy
 * Return:    Pointer (Success)
 */

char *cpy(char *src)
{
	char *ptr;
	int dg, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (dg = 0; src[dg] != '\0'; dg++)
	{
		ptr[dg] = src[dg];
	}

	ptr[dg] = '\0';
	return (ptr);
}

/**
 * new_dog     - Create new dog variable
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *flakes;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	flakes = malloc(sizeof(dog_t));
	if (flakes == NULL)
	{
		return (NULL);
	}

	new_name = cpy(name);
	if (new_name == NULL)
	{
		free(flakes);
		return (NULL);
	}
	(*flakes).name = new_name;

	(*flakes).age = age;

	new_owner = cpy(owner);
	if (new_owner == NULL)
	{
		free((*flakes).name);
		free(flakes);
		return (NULL);
	}
	(*flakes).owner = new_owner;

	return (flakes);
}

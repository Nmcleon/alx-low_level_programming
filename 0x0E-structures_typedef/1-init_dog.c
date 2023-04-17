#include "dog.h"
#include <stdio.h>

/**
* init_dog - Initializes a dog struct with name, age and owner
* @d: Pointer to struct dog
* @name: Pointer to dog name string
* @age: Age of the dog
* @owner: Pointer to owner name string
*
* Return: void
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


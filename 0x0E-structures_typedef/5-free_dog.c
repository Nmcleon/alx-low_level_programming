#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog_t structure
 * @d: pointer to dog_t structure
 *
 * Return: void (Success)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

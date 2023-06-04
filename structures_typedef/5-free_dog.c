#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 *
 * @d: pointer to the dog data
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

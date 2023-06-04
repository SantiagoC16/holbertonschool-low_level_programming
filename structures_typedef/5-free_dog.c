#include "dog.h"

/**
 * new_dog - Write a function that frees dogs
 *
 * @d: pointer to the dog data
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
		return (NULL);
	if (d != NULL)
		free(d);
}

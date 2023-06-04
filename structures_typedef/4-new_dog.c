#include "dog.h"

/**
 * new_dog - Write a function that creates a new dog
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	if (!name || !age || !owner)
		return (NULL);
	n_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (!n_dog->name)
	{
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog = malloc(sizeof(char) * strlen(owner) + 1);
	if (!n_dog->owner)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->owner, owner);
	return (n_dog);
}

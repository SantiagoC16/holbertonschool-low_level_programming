#include "dog.h"
#include "main.h"

/**
 * init_dog - Write a function that initialize a variable of type
 * struct dog
 *
 * @name: is a pointer to a char
 * @age: is a float
 * @owner: is a pointer to char
 * @d: is a struct
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type
 * struct dog
 *
 * @d: is a struct
 *
 */

void print_dog(struct dog *d)
{
if (d->owner == NULL || d->age  == NULL)
{
	printf("(nil)");
}
if (d->name == NULL)
{
	printf("Name: (nil)");
}
if (d == NULL)
{
	return (1);
}
}

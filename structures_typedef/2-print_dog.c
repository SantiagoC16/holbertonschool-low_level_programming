#include "dog.h"


/**
 * print_dog - print the dog struct
 *
 *
 * @d: is a struct
 *
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age <= 0)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
}
}

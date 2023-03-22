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
if (d->owner == NULL)
{
	printf("(nil)");
}
if (d->name == NULL)
{
	printf("Name: (nil)");
}
if (d->age <= 0)
{
	printf("(nil)");
}
if (d == NULL)
{
	printf("");
}
prinft("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}

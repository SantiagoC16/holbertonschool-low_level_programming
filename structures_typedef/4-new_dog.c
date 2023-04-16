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
char *namec;
char *ownerc;

for (namec = 0; namec < name; namec++)
{ ; }
for (ownerc = 0; ownerc < owner; ownerc++)
{ ; }
namec = malloc(sizeof(char) * (strlen(name) + 1));
ownerc = malloc(sizeof(char) * (strlen(owner) + 1));
strcpy(namec, dog_t->name);
strcpy(ownerc, dog_t->owner);
if (namec == NULL || ownerc == NULL)
{
	return (NULL);
}
return (dog_t);
}

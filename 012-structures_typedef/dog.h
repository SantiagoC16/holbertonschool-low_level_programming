#ifndef dogh
#define dogh

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

/**
 * struct dog - an estructure
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */

typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

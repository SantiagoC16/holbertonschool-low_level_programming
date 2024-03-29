#include "main.h"

/**
 * malloc_checked - write a function that allocates memory using malloc
 *
 * @b: is an unsigned int
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

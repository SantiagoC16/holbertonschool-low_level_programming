#include "main.h"

/**
 * _calloc -Write a function that allocates memory for an array, using malloc
 *
 * @nmemb: is an unsigned int
 * @size: is an unsigned int
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

#include "main.h"

/**
 * array_range - Write a function that creates an array of integers
 *
 * @min: is an int
 * @max: is an int
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; j++, i++)
		p[i] = j;
	return (p);
}

#include "main.h"

/**
 * create_array - Write a function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: is an unsigned int
 * @c: is a char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (0);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	}
return (array);
}

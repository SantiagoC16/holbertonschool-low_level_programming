#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array
 *
 * @array: is an array of int
 * @size: size_t
 * @action: int
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int cont;

	if (array == NULL || action == NULL || size == '\0')
	{
		return;
	}
	for (cont = 0; cont <= size; cont++)
	{
		action(array[cont]);
	}
}

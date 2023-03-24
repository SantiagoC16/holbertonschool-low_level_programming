#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 *
 * @array: is an array of int
 * @size: is an int
 * @cmp: int
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (cont = 0; cont < size; cont++)
	{
		if (cmp(array[cont]) != 0)
		{
			return (cont);
		}
	}

return (-1);
}

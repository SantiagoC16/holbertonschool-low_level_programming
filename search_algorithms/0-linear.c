#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t search = 0;

	if (!value || array == NULL || size == 0)
		return (-1);

	for (search = 0; search < size; search++)
	{
		printf("Value checked array[%ld] = [%u]\n", search, array[search]);
		if (array[search] == value)
		{
			return (search);
		}
	}
	return (-1);
}

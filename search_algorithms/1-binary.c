#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t half = size / 2, search;

	if (array == NULL || !value)
		return (-1);

	printf("Searching in array: = ");
	for (search = 0; search < half; search++)
	{
		printf("%d", array[search]);
		if (array[search] == value)
			return (search);
	}
	printf("\n");
	return (-1);
}

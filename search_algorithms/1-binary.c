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
	size_t start = 0, end = size - 1, middle = start + (end - start) / 2, search;

	if (array == NULL || !value)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (search = start; search <= end; search++)
		{
			printf("%d", array[search]);
			if (search != end)
				printf(", ");
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}

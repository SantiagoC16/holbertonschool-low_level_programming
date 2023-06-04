#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: int
 * @size: int
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i + (i * size)];
		k += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d", j, k);
	printf("\n");
}

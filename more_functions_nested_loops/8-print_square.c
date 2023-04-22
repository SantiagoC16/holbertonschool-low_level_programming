#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: int
 * Return: 0
 */

void print_square(int size)
{
	int i, j, k = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			k++;
		}
	}
}

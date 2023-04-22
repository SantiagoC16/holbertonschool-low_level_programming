#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: int
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j, k = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
}

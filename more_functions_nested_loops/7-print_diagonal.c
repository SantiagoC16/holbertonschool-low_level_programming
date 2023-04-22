#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: int
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

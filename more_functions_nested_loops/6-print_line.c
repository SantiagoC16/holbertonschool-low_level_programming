#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: int
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (i > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}

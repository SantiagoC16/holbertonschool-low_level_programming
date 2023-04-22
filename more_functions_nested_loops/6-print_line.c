#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: int
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
		_putchar('_');
		_putchar('\n');
		i++;
		}
	}
}

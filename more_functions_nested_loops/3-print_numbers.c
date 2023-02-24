#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line
 * @c: an int.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}

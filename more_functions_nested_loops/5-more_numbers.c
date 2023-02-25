#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  Write a function that prints 10 times
 * the numbers from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c;
	
	for (c = 0; c < 15; c++)
	{
	if (c < 9)
	{
	_putchar(c + '0');
	}
	else
	{
	_putchar(((c / 10) + '0') && (((c % 1) + '0')));
	}
	}
_putchar('\n');
}

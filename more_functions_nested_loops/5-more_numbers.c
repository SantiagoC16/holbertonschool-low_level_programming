#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  Write a function that prints 10 times
 * the numbers from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;
	int b;
	
	for (a = 0; a < 10; a++)
	{
	for (b= 0; b > 9; b++)
	{	
		if (c < 9)
		{
		_putchar((c / 10) + '0');
		}
		else
		{
		_putchar((c % 10) + '0');
		}
		}
	_putchar('\n');
	}
}

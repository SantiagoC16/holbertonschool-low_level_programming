#include "main.h"
#include <stdio.h>


/**
 * _sqrt_recursion - Write a function that returns the natural square
 * root of a number
 *
 * @n: is an int
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_(1, n));
	}
}

/**
 * _sqrt_ - a
 * @i: int
 * @r: int
 * Return: 0
 */

int _sqrt_(int i, int r)
{
	if ((i * i) == r)
		return (i);
	else if ((i * i) < r)
		return (_sqrt_(i + 1, r));
	else
		return (-1);
}

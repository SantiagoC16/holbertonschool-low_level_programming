#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a, @b, @c: an int
 * return : always 0.
 */

void swap_int(int *a, int *b)
	{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
	}

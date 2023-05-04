#include "main.h"
#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: an int.
 * Return: 0
 */

int _isupper(int c)
	{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
	}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - Write a function that convert a string to an integer
 * @s: is an pointer
 * Return: always
 */

int _atoi(char *s)
{
	unsigned int a = 0;
	int b = 1;

	while (*s != '\n')
	{
		if (*s == '-')
		{
			b = b * -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			a = a * 10 + (*s - '0');
		}
		else if (a > 0)
		{
			break;
		}
		s++;
	}
	return (a * b);
}

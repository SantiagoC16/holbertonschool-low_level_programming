#include "main.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string
 * @a: is an pointer
 * Return: always
 */

char *cap_string(char *a)
{
	int c[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 124};
	int b;
	int e;

	if (a[0] >= 97 && a[0] <= 122)
	{
		a[0] = a[0] - 32;
	}
	for (b = 0; c[b]; b++)
	{
		for (e = 0; a[e]; e++)
		{
			if (a[e] == c[b])
			{
				if (a[e + 1] >= 97 && a[e + 1] <= 122)
				{
					a[e + 1] = a[e + 1] - 32;
				}
			}
		}
	}
	return (a);
}

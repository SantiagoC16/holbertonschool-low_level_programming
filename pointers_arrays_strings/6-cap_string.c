#include "main.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string
 * @a: is an pointer
 * Return: always
 */

char *cap_string(char *a)
{
int c[14] = {0, 9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 124};
int b;
int e;

	for (b = 0; a[b] != '\0';  b++)
	{
		for (e = 0; c[e] != '\0';  e--)
		{
			if (a[b] >= 97 && a[b] <= 122)
			{
				a[b] = a[b] - 32;
			}
			if (a[b] >= 97 && a[b] <= 122 && a[0] == a[b])
			{
				a[b] = a[b] - 32;
			}
		}
	}
return (0);
}

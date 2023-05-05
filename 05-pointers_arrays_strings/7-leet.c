#include "main.h"
#include <stdio.h>

/**
 * leet- Write a function that encodes a string into 1337
 * @a: is an pointer
 * Return: always
 */

char *leet(char *a)
{
	int b[10] = {65, 69, 79, 84, 76, 97, 101, 111, 116, 108};
	int c[10] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};
	int d;
	int e;

	for (d = 0; a[d]; d++)
	{
		for (e = 0; b[e]; e++)
		{
			if (a[d] == b[e])
			{
				a[d] = c[e];
			}
		}
	}
	return (a);
}

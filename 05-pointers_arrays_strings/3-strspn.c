#include "main.h"
#include <stdio.h>

/**
 * _strspn - Write a function that gets the length of a
 * prefix substring
 * @s: is a pointer
 * @accept: is a pointer
 * Return: always
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}
		if (c > a)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return (c);
}

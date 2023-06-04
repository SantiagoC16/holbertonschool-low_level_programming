#include "main.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring
 * @haystack: is a pointer
 * @needle: is a pointer
 * Return: always
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c = 0;
	int d;

	if (needle[0] == '\0')
		return (haystack);
	for (a = 0; haystack[a] != '\0'; a++)
	{
		c = a;
		for (b = 0; needle[b] == haystack[c]; b++, c++)
		{
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
	}
	return (NULL);
}

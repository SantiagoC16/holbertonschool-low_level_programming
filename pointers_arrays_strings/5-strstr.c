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


for (a = 0; haystack[a] != '\0'; a++)
{
	for (b = 0; needle[b] != '\0'; b++)
	{
		if (haystack[a] == needle[b])
		{
			a++;
		}
	}
}
return (NULL);
}


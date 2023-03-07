#include "main.h"
#include <stdio.h>


/**
 * _strpbrk - Write a function that searches a
 * string for any of a set of bytes.
 * @s: is a pointer
 * @accept: is a pointer
 * Return: always
 */


char *_strpbrk(char *s, char *accept)
{
int a;
int b;

for (a = 0; s[a] != '\0'; a++)
{
	for (b = 0; accept[b] != '\0'; b++)
	{
		if (s[a] == accept[b])
		{
			return (s + a);
		}
	}
}
return (NULL);
}

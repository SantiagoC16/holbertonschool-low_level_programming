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
unsigned int a = 0;

for (; s[a] != '\0'; a++)
{
	for (; accept[a] != '\0'; a++)
	{
		if (*s == *accept)
		{
			s++;
		}
		else
		{
			break;
		}
	}
}
return (a);
}


#include "main.h"
#include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string
 * @s: is an pointer
 * @c: is a char
 * Return: always
 */

char *_strchr(char *s, char c)
{

for (; *s != '\0'; s++)
{
if (*s == c)
{
	break;
}
}
if (*s != '\0')
{
	return (NULL);
}
return (s);
}

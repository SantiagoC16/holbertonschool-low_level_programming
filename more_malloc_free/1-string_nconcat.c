#include "main.h"

/**
 * string_nconcat - write a function that concatenates two strings
 *
 * @s1: is a pointer
 * @s2: is a pointer
 * @n: is an unsigned int
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *r;


if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
if (n >= strlen(s2))
	n = strlen(s2);
r = malloc(sizeof(char) * (strlen(s1) + n) + 1);
if (r == NULL)
{
	return (NULL);
}
else
{
	strcpy(r, s1);
	strcat(r, s2);
	r = '\0';
}
return (r);
}

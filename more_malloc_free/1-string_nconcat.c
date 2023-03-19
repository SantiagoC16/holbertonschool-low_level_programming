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
unsigned int a;
unsigned int b;
char *r;


if (s1 == NULL || s2 == NULL)
{
	s1 = "";
	s2 = "";
}
else
{
	a = strlen(s1);
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			n = s2[b];
		}
	}
	r = malloc(sizeof(char) * (a + n) + 1);
	if (r == NULL)
	{
		free(r);
		return (NULL);
	}
	else
	{
	strcpy(r, s1);
	strcat(r, s2);
	r = '\0';
	}
}
return (r);
}

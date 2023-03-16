#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings
 *
 * @s1: is a char
 * @s2: is a char
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
int l;
int k;
int c;
char *r;


if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}

else
{
l = strlen(s1);
k = strlen(s2);
r = malloc(sizeof(char) * (l + k + 1));
if (r == NULL)
{
	return (NULL);
}

else
{
	for (c = 0; c <= l; c++)
	{
		r[c] = s1[c];
	}
	strcat(s1, s2);
}
}
return (r);
}

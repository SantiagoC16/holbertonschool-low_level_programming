#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: is a char
 * @s2: is a char
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	else
	{
		r = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
		if (r == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy(r, s1);
			strcat(r, s2);
		}
	}
	return (r);
}

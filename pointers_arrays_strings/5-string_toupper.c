#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase
 * @a: is an pointer
 * Return: always
 */

char *string_toupper(char *a)
{
int b;

for (b = 0; a[b]; b++)
{
	if (*a >= 97 && *a <= 122)
	{
		a[b] = a[b] - 32;
	}
}
return (a);
}


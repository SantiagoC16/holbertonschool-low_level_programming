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

if (a[0] >= 97 && a[0] <= 122)
{
	a[0] = a[0] - 32;
}
return (a);
}


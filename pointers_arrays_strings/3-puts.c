#include "main.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string.
 * @str: is a string
 * return : always a.
 */

void _puts(char *str)
{
	int a = 0;

	while (*str + a != '\0')
	{
	a++;
	puts(str);
	}
}

#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - Write a function that returns the length of a string
 *
 * @s: is a pointer
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
int a = 0;

if (*s != '\0')
{
	a = (_strlen_recursion(s + 1) + 1);
}
return (0);
}

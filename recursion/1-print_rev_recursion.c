#include "main.h"
#include <stdio.h>


/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 *
 * @s: is a pointer
 *
 * Return: a
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
	putchar(*s);
	_puts_recursion(s + 1);
}
}

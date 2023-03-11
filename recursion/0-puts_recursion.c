#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - Write a function that prints a string
 *
 * @s: is a pointer
 *
 * Return: always
 */
void _puts_recursion(char *s)
{
if (*s)
{
	putchar(*s);
	_puts_recursion(s + 1);
}
else if (*s == '\0')
{
	putchar('\n');
}
}

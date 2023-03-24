#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: is a char
 * @f: is a reference
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
	;
}
if (name != NULL || f != NULL)
{
	(*f)(name);
}
}

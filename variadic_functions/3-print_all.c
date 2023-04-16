#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything
 *
 * @format: char
 *
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
va_list ex4;
int cont = 0;
int ints;
char chars;
float floats;
char *str;

va_start(ex4, format);
while (format != NULL && format[cont] != '\0')
{


	s = va_arg(ex4, char *);
	f = va_arg(ex4, double);
	i = va_arg(ex4, int);
	c = va_arg(ex4, int);
cont++;
}




printf("\n");
va_end(ex4)
}

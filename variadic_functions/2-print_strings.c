#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings, followed by a new line
 *
 * @separator: is a const char pointer
 * @n: is a const unsigned int
 *
 * Return: x
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int cont;
const char *string;

va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	for (cont = 0; n < cont; cont++)
	{
	if (string != NULL)
	{
	printf("%s\n", va_arg(args, char *));
	if (cont != (n - 1))
	{
		printf("%s", separator);
	}
	}
	if (string == NULL)
	{
	printf("(nil)\n");
	}
	}
printf("\n");
}

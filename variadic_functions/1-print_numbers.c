#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers
 *
 * @separator: const char pointer?
 * @n: const unsigned int
 *
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int cont;

	va_start(args, n);
	if (separator == NULL)
	{
		return;
	}
	for (cont = 0; n < cont; cont++)
	{
		printf("%d", va_arg(args, int));
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

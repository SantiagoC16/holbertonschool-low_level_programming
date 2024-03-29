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
	for (cont = 0; cont < n; cont++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && cont != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}

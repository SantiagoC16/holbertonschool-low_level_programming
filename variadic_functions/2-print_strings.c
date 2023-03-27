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
char *string;

va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
for (cont = 0; cont < n; cont++)
{
	string = va_arg(args, char *);
	if (string == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", string);
		if (cont != (n - 1))
		{
			printf("%s", separator);
		}
	}
}
printf("\n");
va_end(args);
}

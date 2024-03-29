#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 *
 * @n: is a const unsigned int
 *
 *
 * Return: abc
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int cont;
unsigned int sum;

va_start(args, n);

for (cont = 0; cont < n; cont++)
{
	if (n == 0)
	{
		return (0);
	}
	sum += va_arg(args, int);
}
return (sum);
}

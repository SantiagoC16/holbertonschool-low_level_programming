#include "variadic_functions.h"

/**
 * characters - print chars
 * @ex4: va_list
 * Return: 0
 */

void characters(va_list ex4)
{
	char c;

	c = va_arg(ex4, int);
	printf("%c", c);
}

/**
 * floatx - print float numbs
 * @ex4: va_list
 * Return: 0
 */
void floatx(va_list ex4);
{
	double f;

	f = va_arg(ex4, double);
	printf("%f", f);
}

/**
 * strings - print strings
 * @ex4: va_list
 * Return: 0
 */

void strings(va_list ex4);
{
	char *s;

	s = va_arg(ex4, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * numbers - print numbers
 * @ex4: va_list
 * Return: 0
 */
void numbers(va_list ex4);
{
	int i;

	i = va_arg(ex4, int);
	printf("%d", i);
}

/**
 * print_all - Write a function that prints anything
 *
 * @format: char
 *
 *
 * Return: 0
 */

void print_all(const char *const format, ...)
{
	va_list ex4;
	int cont = 0, cont2 = 0;
	char *sep = "", *sep2 = ", ";
	print_t keys[] = {
		{"c", characters},
		{"s", strings},
		{"i", numbers},
		{"f", floatx},
		{NULL, NULL},
	};

	va_start(ex4, format);
	while (format != NULL && format[cont] != '\0')
	{
		while(keys[cont2].f)
		{
			if (format[cont2] == keys[cont2].f)
			{
				printf("%s", sep);
				keys[cont2].f(ex4);
				sep = sep2;
			}
			cont2++;
		}
		cont++;
	}

	printf("\n");
	va_end(ex4);
}

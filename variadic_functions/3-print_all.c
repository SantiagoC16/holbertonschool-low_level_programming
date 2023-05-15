#include "variadic_functions.h"

/**
 * characters - print chars
 * @ex4: va_list
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
 */
void floatx(va_list ex4)
{
    double f;

    f = va_arg(ex4, double);
    printf("%f", f);
}

/**
 * strings - print strings
 * @ex4: va_list
 */
void strings(va_list ex4)
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
 */
void numbers(va_list ex4)
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
    int i = 0, a;
    char *separator = "", *separator2 = ", ";
    print_t keys[] = {
        {"c", characters},
        {"s", strings},
        {"i", numbers},
        {"f", floatx},
        {NULL, NULL},
    };

    va_start(ex4, format);
    while (format != NULL && format[i] != '\0')
    {
		a = 0;
        while(keys[a].type)
        {
            if (format[i] == keys[a].type[0])
            {
                printf("%s", separator);
                keys[a].f(ex4);
                separator = separator2;
            }
            a++;
        }
        i++;
    }
    printf("\n");
    va_end(ex4);
}

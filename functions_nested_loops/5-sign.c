#include "main.h"
#include <stdio.h>

/**
 * print_sign - Write a function that prints the sign of a number.
 * @c: an int.
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Write a function that
 * prints the last digit of a number.
 * @n: an int.
 * Return:the last number
 */
int print_last_digit(int n)
{
int j;
j = n % 10;
if (j < 0)
{
_putchar (-j + 48);
return (-j);
}
else
{
_putchar (j + 48);
return (j);
}
}

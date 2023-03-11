#include "main.h"
#include <stdio.h>


/**
 * factorial - Write a function that returns the factorial of a given number
 *
 * @n: is an int
 *
 * Return: always 0
 */

int factorial(int n)
{

if (n < 0)
{
	return (-1);
}
else if (n == 1)
{
	return (1);
}
return (n * factorial(n - 1));
}

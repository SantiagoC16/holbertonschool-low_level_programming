#include "main.h"
#include <stdio.h>


/**
 * _prime - aux
 * @j: int
 * @k: int
 * Return: 0
 */

int _prime(int j, int k)
{
	if (j % k == 0 && k < j)
		return (0);
	else if (j == k)
		return (1);
	else
		return (_prime(j, k + 1));
}

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: is an int
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	int i = 0;

	if (n <= 1)
		return (0);
	else if (n > 1)
		i = _prime(n, 2);
	return (i);
}

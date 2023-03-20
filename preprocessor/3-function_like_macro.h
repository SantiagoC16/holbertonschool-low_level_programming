#include "main.h"

/**
 * abs - print the absolute value of the number
 * @n: is an int
 *
 * Return: 0
 */

int _abs(int x)
{
int c;

if (x >= 0)
{
	for (c = 0; c >= x; c++)
	{
		c = x;
		printf("%d", c);
	}
}
else
{
	for (c = 0; c < x; c--)
	{
		c = x * -1;
		printf("%d", c);
	}
}
return (0);
}

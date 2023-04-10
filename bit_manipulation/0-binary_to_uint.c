#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is a charp pointer
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, result;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if ((b[i] == '0') || (b[i] == '1'))
		{
			result = result * 2 + (b[i] - 48);
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

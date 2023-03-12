#include "main.h"

/**
 * main - Write a program that prints all arguments it receive
 *
 * @argc: is an int
 * @a: is
 *
 * Return: 0
 */

int main(int argc, char *a[])
{
	int b;
	int m = 0;

	for (b = 1; b < argc; b++)
	{
	m = m * atoi(a[b]);
	printf("%d\n", m);
	}
	return (0);
}

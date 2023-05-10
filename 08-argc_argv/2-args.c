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

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", a[b]);
	}
	return (0);
}

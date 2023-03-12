#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @argc: is an int
 * @b: is
 *
 * Return: 0
 */

int main(int argc, char *b[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%d\n", atoi(b[a]));
	}
	return (0);
}

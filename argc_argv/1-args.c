#include "main.h"

/**
 * main - Write a program that prints its name
 *
 * @argc: is an int
 * @argv: is the name of the file
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%d\n", atoi(argv[a]));
	}
	return (a);
}

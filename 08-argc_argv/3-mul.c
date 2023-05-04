#include "main.h"

/**
 * main - Write a program that prints all arguments it receive
 *
 * @argc: is an int
 * @a: is
 *
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char *a[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(a[1]) * atoi(a[2]);
		printf("%d\n", m);
	}
	return (0);
}

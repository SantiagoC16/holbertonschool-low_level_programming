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
	int m;

	m = atoi(a[1]) * atoi(a[2]);
	printf("%d\n", m);
	return (0);
}

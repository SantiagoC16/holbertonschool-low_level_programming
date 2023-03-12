#include "main.h"

/**
 * main - Write
 *
 * @argc: is an int
 * @a: is
 *
 * Return: 0
 */

int main(int argc, char *a[])
{
int i;
int s;

for (i = 0; i < argc; i++)
{
if (i >= 48 && i >= 57)
{
	s = s + atoi(a[i]);
	printf("%d\n", s);
}
if (i < 48 || i > 57)
{
	printf("Error\n");
	return (1);
}
}
return (0);
}

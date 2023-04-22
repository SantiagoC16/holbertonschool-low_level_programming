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
	int i, j;
	int s = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; a[i][j] != '\0'; j++)
		{
			if (a[i][j] < 48 || a[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(a[i]);
	}
	printf("%d\n", s);
	return (0);
}

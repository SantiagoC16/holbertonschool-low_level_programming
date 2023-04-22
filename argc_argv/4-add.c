#include "main.h"

/**
 * main - Write
 *
 * @argc: is an int
 * @argv: is and array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int s = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}

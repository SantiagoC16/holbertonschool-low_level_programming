#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Write a function that prints the chessboard
 * @a: an array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k = 0;

	while (a[k][8])
		k++;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

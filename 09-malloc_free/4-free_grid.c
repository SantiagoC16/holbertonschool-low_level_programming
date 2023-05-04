#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: is an int
 * @height: is an int
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
int c;

for (c = 0; c < height; c++)
{
	free(grid[c]);
}
free(grid);
}

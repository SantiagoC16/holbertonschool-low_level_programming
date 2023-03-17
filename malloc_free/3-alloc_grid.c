#include "main.h"

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional array of integers
 *
 * @width: is an int
 * @height: is an int
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
int h;
int w;
int **g;

if (width <= 0 || height <= 0)
{
	return (NULL);
}

else
{
	g = malloc(sizeof(int) * height);
	if (g == 0)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);
		if (g[h] == 0)
		{
			return (NULL);
		}
		for (w = 0; w < widht; w++)
		{

		}
	}
}
return (0);
}

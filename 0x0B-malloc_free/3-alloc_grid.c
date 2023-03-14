#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns apointer to a two dimensional
 * array of integers
 * @width: first integer array
 * @height: second integer array
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		p[x] = (int *)malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(p[x]);
			free(p);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}
	return (p);
}

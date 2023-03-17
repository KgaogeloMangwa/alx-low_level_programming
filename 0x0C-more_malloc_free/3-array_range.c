#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: integer input
 * @max: integer input
 * Return: 0 always
 */
int *array_range(int min, int max)
{
	int x, y;
	int *n;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	n = malloc(sizeof(int) * y);
	if (n == NULL)
		return (NULL);
	for (x = 0; x < y; x++, min++)
	{
		n[x] = min;
	}
	return (n);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @c: the initial char
 * @size: size of array in memory
 * Return: null if size = 0 else pointer
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *x;

	x = malloc(sizeof(c) * size);

	if (size == 0 || x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(x + i) = c;
	}
	return (x);
}

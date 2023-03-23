#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array
 * @array: array to iterate
 * @cmp: a pointer to the function to be used to compare
 * Return: 0 always
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp) (array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @c: the initial char
 * @size: size of array in memory
 * Return: null if size = 0 else pointer
 */
char *create_array(unsigned int size, char c)
{

	unsigned int size;

	if (size == 0)
		return (NULL);

	char *x = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;

	return (x);
}

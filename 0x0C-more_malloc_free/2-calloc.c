#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - a function that that allcates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size of elements
  *
  * Return: 0 always.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(y);

	if (p == NULL)
		return (NULL);

	while (x < y)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}

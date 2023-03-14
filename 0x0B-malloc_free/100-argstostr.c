#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: integer
 * @av: pointer pointer
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int w, x, y, z = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
			z++;
	}
	z += ac;

	s = malloc(sizeof(char) * z + 1);
	y = 0;
	if (p == NULL)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
		{
			p[y] = av[w][x];
			y++;
		}
		if (p[y] == '\0')
		{
			p[y++] = '\n';
		}
	}
	return (p);
}

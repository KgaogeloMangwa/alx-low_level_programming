#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: the string character
 * Return 0 on success
 */
char *_strdup(char *str)
{
	int x, y;
	char *i;

	if (str == 0)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0'; y++)
	{
	}
	i = malloc(sizeof(char) * (y + 1));
	if (i == 0)
	{
		return (NULL);
	}
	for (x = 0; *(str + x) != '\0'; x++)
	{
		*(i + x) = *(str + x);
	}
	*(i + x) = '\0';
		return (i);
}

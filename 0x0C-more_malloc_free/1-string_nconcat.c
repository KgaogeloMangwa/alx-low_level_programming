#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - a function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: integer n
  * Return 0 always
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int w, x, y, z;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[w])
		w++;

	while (s2[y])
		y++;

	if (n >= y)
		z = w + y;
	else
		z = w + x;

	str = malloc(sizeof(char) * z + 1);
	if (str == NULL)
		return (NULL);

	y = 0;
	while (x < z)
	{
		if (x <= w)
			str[x] = s1[x];

		if (x >= w)
		{
			str[x] = s2[y];
			y++;
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}

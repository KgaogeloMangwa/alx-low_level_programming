#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str-concat - a function that concatenates two strings
 * @s1: string character
 * @s2: string character
 * Return 0
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *newall = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	newall = (char *)malloc((a + b) * sizeof(char));

	if (newall == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
		newall[c] = s1[c];

	for (c = 0; s2[c] != '\0'; c++)
		newall[c + a] = s2[c];

	return (newall);
}

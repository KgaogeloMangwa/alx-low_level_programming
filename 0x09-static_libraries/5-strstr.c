#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: the string to search through
 * @needle: the substring to search for
 *
 * Return: a pointer to the located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (NULL);
}

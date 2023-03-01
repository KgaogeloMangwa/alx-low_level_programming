#include "main.h"

/**
 * _strncat - a function to concatenate two strings
 *
 * @dest: storage for the length of teh string in i
 *
 * @src: cat this string to the end of the first string
 *
 * @n: numbers of bytes
 *
 * Return: the one concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, str;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (str = 0; str < n; str++)
	{
		dest[i + str] = src[str];
		if (src[str] == '\0')
			str = n;
	}
	return (dest);
}


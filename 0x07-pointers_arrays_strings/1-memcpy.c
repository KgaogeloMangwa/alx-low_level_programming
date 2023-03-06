#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: where memory is copied to
 * @src: where memory is copied from
 * @n: number of bytes
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}

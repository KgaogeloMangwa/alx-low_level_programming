#include "main.h"
#include <stdio.h>
#include <string.h>


/*
 * binary_to_uint a function that converts a binary number
 * to an unsigned int
 * @b: pointing to the string of 0 1 chars
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_unint(const char *b)
{

	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}



	while (*b != '\0')
	{
		num = num << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			num = num | 1;
		b++;
	}

	return (num);
}

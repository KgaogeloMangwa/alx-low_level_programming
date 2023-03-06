#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the bytes to consist of
 * Return: number of bytes from s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, input, checker;

	input = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		checker = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				input++;
				checker = 1;
			}
		}

		if (checker == 0)
			return (input);
	}

	return (input);
}

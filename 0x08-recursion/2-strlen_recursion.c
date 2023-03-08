#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 * @s: the string input to return length of
 * Return: always 0
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);

}

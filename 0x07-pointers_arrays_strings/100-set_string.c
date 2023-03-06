#include "main.h"

/**
 * set_string - a function that setsthe value of a pointer to a char
 * @s: input value
 * @to: assigned char
 * Return: 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}

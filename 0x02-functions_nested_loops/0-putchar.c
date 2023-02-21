#include "main.h"

/**
 * main- entry point of our program
 *
 * description - a program that prints _putchar followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char *out = "_putchar";

	while (*out)
	{
		_putchar(*out);
		out++;
	}
	_putchar('\n');

	return (0);
}

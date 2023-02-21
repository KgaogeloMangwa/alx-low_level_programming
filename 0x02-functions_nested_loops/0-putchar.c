#include <stdio.h>

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
		putchar(*out);
		out++;
	}
	putchar('\n');

	return (0);
}

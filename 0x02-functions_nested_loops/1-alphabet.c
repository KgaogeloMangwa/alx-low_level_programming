#include "stdio.h"

/**
 * main - check the code
 *
 * description - a program to print the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

}

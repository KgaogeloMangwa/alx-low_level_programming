#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * description - a program to print the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
}

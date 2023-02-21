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

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		print_alphabet();

	return (0);

}

void print_alphabet(void)
{
	putchar(alpha);
	putchar('\n');
}

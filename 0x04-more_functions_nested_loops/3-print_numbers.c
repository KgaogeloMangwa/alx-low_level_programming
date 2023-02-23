#include "main.h"

/**
 * print_numbers - a function that prints the numbers frm 0-9
 *
 * Return: 0-9 followed by new line 
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');
}

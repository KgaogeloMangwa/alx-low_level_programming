#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to convert to binary
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	mask = (unsigned int long)1 << ((sizeof(unsigned long int) * 8) - 1);

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if (n & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}

		mask >>= 1;
	}
}

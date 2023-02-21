#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10times in lowerscase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char az;

	int i;

	i = 0;

	while (i < 10)
	{
		az = 'a';
		while (az <= 'z')
		{
			putchar(az);
			az++;
		}
		putchar('\n');
		i++;
	}
}

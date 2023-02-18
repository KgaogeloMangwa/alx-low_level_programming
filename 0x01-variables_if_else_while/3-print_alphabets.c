#include <stdio.h>

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lowerup;

	for (lowerup = 'a'; lowerup <= 'z'; lowerup++)
		putchar(lowerup);

	for (lowerup = 'A'; lowerup <= 'Z'; lowerup++)
		putchar(lowerup);

	putchar('\n');

	return (0);
}

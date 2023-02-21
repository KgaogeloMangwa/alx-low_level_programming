#include <unistd.h>

/**
 *
 * _putchar - prints the given character 
 * p: is the character to print
 *
 * Return: upon success 1.
 * on error a different value is returned and error handled
 */

int _putchar(char p)
{
	return (write(1, &p, 1));
}

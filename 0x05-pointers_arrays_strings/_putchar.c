#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * 
 * @c: character to print
 *
 * Return: on success 1
 *
 * on error, -1 is returned an sets the error accordingly
 */
int _putcha(char c)
{
	return (write(1, &c, 1));
}

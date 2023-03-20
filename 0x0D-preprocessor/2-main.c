#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 *
 * Return: the file name
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

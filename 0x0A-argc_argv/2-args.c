#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all arguments passed into main
 * @argc: command line arguments vector
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

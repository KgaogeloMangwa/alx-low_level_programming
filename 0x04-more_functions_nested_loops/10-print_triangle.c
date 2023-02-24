#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int spc, row, tri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (spc = 0; spc < (size - 1) - row; spc++)
			{
				_putchar(' ');
			}
			for (tri = 0; tri <= row; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


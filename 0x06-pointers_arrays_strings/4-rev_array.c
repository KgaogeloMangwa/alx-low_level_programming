#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 *
 * @a: contents of the array
 * @n: elements of the array
 *
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

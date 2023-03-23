#include "varidict_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: arguments
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	var_list varlist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	var_list(varlist, n);

	for (i = 0; i < n; i++)
	{
		sum += vararg(varlist, const unsigned int);
	}
	var_end(varlist);
	return (sum);
}

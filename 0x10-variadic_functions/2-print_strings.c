#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0 always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}

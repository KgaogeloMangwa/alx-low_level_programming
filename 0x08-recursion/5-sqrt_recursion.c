#include "main.h"
int squareroot(int j, int i);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: input integer to get sqrt root of
 * Return: 0 always
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}

#include "main.h"
int length(char *s);
int palindrome(char str[], int st, int end);

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string to evaluate
 * Return: 0 always
 */
int is_palindrome(char *s)
{
	int len;

	len = length(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * length - function to check the length of the string
 * @s: strng input
 * Return: length
 */
int length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	return (0);
}
/**
 * palindrome - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from length
 * Return: if str is a palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}

#include "holberton.h"

/**
 * is_pal - function that returns 1 for palindromes
 * and 0 if not
 * @s: string accepted by function
 * @start: start of the string
 * @end: end of the string
 *
 * Return: 1 for palindrome, 0 if not
 */
int is_pal(char *s, int start, int end)
{
	if (start == end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	if (start < end + 1)
	{
		return (is_pal(s, start + 1, end - 1));
	}

	return (1);

}

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string accepted by function
 *
 * Return: 0 on success
 */
int _strlen_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - function that returns 1 for palindromes
 * and 0 if not
 * @s: string accepted by function
 *
 * Return: 1 for palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}

	return (is_pal(*s, 0, n - 1));
}

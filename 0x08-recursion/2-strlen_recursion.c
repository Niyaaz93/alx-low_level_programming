#include "holberton.h"

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
		return 0;
	}

	return (1 + _strlen_recursion(s + 1));
}

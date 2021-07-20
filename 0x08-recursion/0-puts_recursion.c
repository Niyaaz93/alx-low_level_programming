#include "holberton.h"

/**
 * _puts_recursion - function that prints a string
 * followed by a new line
 * @s: string accepted by function
 *
 * Return: 0 on success
 */
void _puts_recursion(char *s)
{
	/* Base Case */
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

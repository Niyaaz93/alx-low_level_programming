#include "holberton.h"

/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: string accpeted by function
 *
 * Return: 0 on sucsess
 */
void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(s);
	}
}

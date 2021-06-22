#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * Description: prints the sign of a number
 * and returns 1 and prints + if n > 0
 * and returns 0 and prints 0 if n = 0
 * and returns -1 and prints  - if n < 0
 * @n: the interger being checked
 * Return: 1 (if n > 0), 0 (if n = 0), -1 (if n < 0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}

	_putchar('\n');
}

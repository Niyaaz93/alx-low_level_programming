#include "holberton.h"

/**
 * print_last_digit - printing the last digit of a number
 * Description: function that prints the last digit of a number
 * @a: integer being analysed
 * Return: last digit of the integer
 */

int print_last_digit(int a)
{
	int last;

	if (a < 0)
	{
		a = a * -1;
	}

	last = a % 10;
	_putchar('0' + (last));
	return (last);

	_putchar('\n');
}

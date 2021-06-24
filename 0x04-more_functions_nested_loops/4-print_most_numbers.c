#include "holberton.h"

/**
 * print_most_numbers - Function that prints most numbers from 0 - 9
 * Description: Function that prints most numbers from 0 to 9
 * but excludes the 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0;  i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

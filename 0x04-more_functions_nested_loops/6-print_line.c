#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal
 * Description: Function that draws a straight line in the terminal
 * @n: number of times the character _ us printed
 * Return: void (successful)
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar(95);

		if (i == 0 && i < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

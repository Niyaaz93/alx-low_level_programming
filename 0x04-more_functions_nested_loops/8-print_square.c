#include "holberton.h"

/**
 * print_square - function that prints a square
 * Description: Function that prints a square followed by a new line
 * @size: size of the square being printed
 * Return: void (successful)
 */

void print_square(int size)
{
	int i;
	int j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

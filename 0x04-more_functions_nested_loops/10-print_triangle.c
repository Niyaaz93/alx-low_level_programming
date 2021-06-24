#include "holberton.h"

/**
 * print_triangle - function that prints a triangle followed
 * by a newline
 * Description: function that prints a triangle specified by the
 * variable size followed by a newline
 * @size: the size of the triangle
 * Return: void (successful)
 */

void print_triangle(int size)
{
	int hash;
	int space;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar(35);
	}
	else
	{
		for (hash = 0; hash < size; hash++)
		{
			for (space = 0; space < size; space++)
			{
				if ((hash + space) >= (size - 1))
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

#include "holberton.h"

/**
 * print_diagonal - Function that prints a diagonal line in the terminal
 * Description: Function that prints a diagonal line in the terminal for a
 * value of n greater than 0
 * @n: number of times the character is printed in the terminal
 * Return: void (successful)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0 && n == 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * Description: Function that takes in int n and prints
 * the times table for the specified int
 * dont print anything for values greater than 15 or 0
 * @n: integer for which a times table is made
 * Return: void (successful)
 */

void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n != 15 && n != 0)
	{
		for (row = 0; row < n; row++)
		{
			putchar(48);

			for (col = 1; col < n; col++)
			{
				prod = row * col;
				putchar(',');
				putchar(' ');
				putchar(' ');

				if (prod < 10)
				{
					putchar(' ');
					putchar(prod + '0');
				}

				else
				{
					putchar((prod / 10) + '0');
					putchar((prod % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}

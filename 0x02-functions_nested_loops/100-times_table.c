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
	int row, col, prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = row * col;
				if (col == 0)
				{
					putchar(prod + '0');
				}
				else
				{
					putchar(',');
					putchar(' ');
					if (prod <= 9)
					{
						putchar(',');
						putchar(' ');
						putchar(prod + '0');
					}
					else if (prod > 9 && prod < 100)
					{
						putchar(' ');
						putchar((prod / 10) + '0');
						putchar((prod % 10) + '0');
					}
					else if (prod >= 100)
					{
						putchar((prod / 100) + '0');
						putchar(((prod / 10) % 10) + '0');
						putchar((prod % 10) + '0');
					}
				}
			}
		putchar('\n');
		}
	}
}

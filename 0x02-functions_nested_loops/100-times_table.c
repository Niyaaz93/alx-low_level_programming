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

	for (row = 0; row <= n; row++)
	{
		putchar(48);

		for (col = 1; col <= n; col++)
		{
			prod = row * col;
			if (prod < 10)
			{
				printf("%d,   ", prod);
			}
			else if (prod > 99)
			{
				printf("%d, ", prod);
			}
			else
			{
				printf("%d,  ", prod);
			}
		}
		printf("\n");
	}
}

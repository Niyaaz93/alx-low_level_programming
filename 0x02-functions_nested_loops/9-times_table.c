#include "holberton.h"

/**
 * times_table - prints out the 9 times table
 * Description: This function prints out the 9 times table
 * Return: void (successful)
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row < 10; row++)
	{
		_putchar(48);

		for (col = 0; col < 10; col++)
		{
			prod = row * col;
			_putchar(',');
			_putchar(' ');

			if (prod < 10)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}

			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}

}

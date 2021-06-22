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

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			if ((row * col) > 9)
			{
				_putchar((row * col) / 10 + '0');
				_putchar((row * col) % 10 + '0');
				if(col != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			else
			{
				_putchar(row * col + '0');
				if(c != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}

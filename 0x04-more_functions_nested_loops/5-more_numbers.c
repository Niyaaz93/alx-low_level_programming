#include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the number
 * Description: Function that prints 10 times the number from 0 up to 14
 * followed by a new line
 * Return: void (successful)
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}
		n++;
		_putchar('\n');
	}
}

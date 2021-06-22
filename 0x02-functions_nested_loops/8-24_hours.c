#include "holberton.h"

/**
 * 24_hours - printing every minute of the day
 * Description: Printing every minute of the day like
 * in the Jack Bauer series.
 * Return: void (successful)
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

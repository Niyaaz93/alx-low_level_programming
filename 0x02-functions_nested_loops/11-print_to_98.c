#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - printing all numbers from integer n up to 98
 * Description: function that prints all the numbers from
 * integer n up until the number 98, separated by commas,
 * and printed in order
 * @n: number that is printed first
 * Return: void (successful)
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	printf("%d\n", n);
}

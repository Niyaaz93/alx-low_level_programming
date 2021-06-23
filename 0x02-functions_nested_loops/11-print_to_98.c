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
	int i;

	if (n > 98)
	{
		for (i = n; i > 98 ; i--)
		{
			printf("%d, ", i);
		}
	}

	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");

}

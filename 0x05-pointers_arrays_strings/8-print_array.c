#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n integers of an array
 * @a: pointer that points to array
 * @n: number of elements to print
 *
 * Return: void (successful)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "holberton.h"

/**
 * swap_int - swaps the valus of 2 integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: void (successful)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

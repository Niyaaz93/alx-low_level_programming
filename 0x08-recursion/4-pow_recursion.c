#include "holberton.h"

/**
 * _pow_recursion - function that returns x to power of y
 * @x: number to be raised to a power
 * @y: power that number is raised to
 *
 * Return: 0 on success, -1 on error
 */
int _pow_recursion(int x, int y)
{
	/* Base Case */
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y-1));
}

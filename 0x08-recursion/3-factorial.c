#include "holberton.h"

/**
 * factorial - function that returns factorial of a number
 * @n: number accepted by function
 *
 * Return: 0 on success, -1 on error
 */
int factorial(int n)
{
	/* Base Case */
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

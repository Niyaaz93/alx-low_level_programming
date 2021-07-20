#include "holberton.h"

/**
 * sqrt_test - function that test if for the sqrt of a num
 * @low: root (guess)
 * @n: number to be evaluated
 *
 * Return: sqrt of the number given
 */
int sqrt_test(int root, int n)
{
	if ((root * root) == n)
	{
		return (root);
	}
	else
	{
		if ((root * root) > n)
		{
			return (-1);
		}
		else
		{
			return (sqrt_test(root + 1, n));
		}
	}
}


/**
 * _sqrt_recursion - function that return natural sqrt of a number
 * @n: number accpeted by function
 *
 * Return: 0 on success, -1 on error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_test(1, n));
	}
}

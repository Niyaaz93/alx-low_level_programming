#include "holberton.h"

/**
 * sqrt_test - function that test if for the sqrt of a num
 * @low: lower limit guess
 * @n: number to be evaluated
 *
 * Return: sqrt of the number given
 */
int sqrt_test(int low, int n)
{
	float mid;

	mid = (n + low) / 2;

	if ((mid * mid) == n)
	{
		return (mid);
	}
	else if ((n - low) < 0.001)
	{
		return (mid);
	}
	else if ((mid * mid) > high)
	{
		return (sqrt_test(low, mid));
	}
	else
	{
		return (sqrt(mid, n));
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

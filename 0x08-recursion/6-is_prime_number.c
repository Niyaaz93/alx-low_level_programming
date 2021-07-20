#include "holberton.h"


/**
 * is_prime - function that returns 1 for prime numbers
 * and 0 otherwise
 * @n: number accepted by function
 * @i: iterator
 *
 * Return: 1 for prime number, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(n, i + 1));
		}
	}
}

/**
 * is_prime_number - function that returns 1 for prime numbers
 * and 0 otherwise
 * @n: number accepted by function
 *
 * Return: 1 for prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}

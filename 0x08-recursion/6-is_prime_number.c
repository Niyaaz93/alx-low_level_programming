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
        i = n / 2;

	if (n % i == 0)
        {
                return (1);
        }
        else
        {
                i = i - 1;
		return (is_prime(n, i));
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
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, i));
}

#include <stdio.h>

/**
 * main - function that prints the largest prime
 * factor of the number 612852475143
 *
 * Return: largest prime factor
 */

int main(void)
{
	long n = 612852475143;
	long div = 2;
	long ans = 0;
	long maxFact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu\n", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}

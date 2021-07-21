#include <stdio.h>

/**
 * main - function that prints the largest prime
 * factor of the number 612852475143
 *
 * Return: largest prime factor
 */

int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int ans = 0;
	long int maxFact;

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
				printf("%ld\n", maxFact);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}

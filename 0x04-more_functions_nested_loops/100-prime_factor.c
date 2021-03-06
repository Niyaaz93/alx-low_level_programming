#include <stdio.h>

/**
 * main - function that prints the largest prime
 * factor of the number 612852475143
 * @void: no argument taken by main
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
		if ((n % div) != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				ans = 1;
				break;
			}
		}
	}
	printf("%lu\n", maxFact);
	return (0);
}

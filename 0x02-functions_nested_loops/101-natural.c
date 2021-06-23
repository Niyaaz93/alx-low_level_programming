#include <stdio.h>

/**
 * natural - computing and printing the sum of
 * all the multiples of 3 or 5 below 1024
 * Description: function that computes the and prints
 * the sums of all the multiples of 3 and 5 below 1024
 * followed by a new line
 * Return: the sum of the multiples
 */

int natural(int sum)
{
	int i;
	int a;
	int b;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0 || b == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}

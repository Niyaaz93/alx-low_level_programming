#include <stdio.h>

/**
 * main - entry point into the function
 * Description: this function prints the numbers from 1 to 100
 * followed by a newline and replace multiples of 3 and 5
 * with the words Fizz and Buzz
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

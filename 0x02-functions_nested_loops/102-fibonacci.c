#include <stdio.h>

/**
 * main - entry into the function
 * Description: Function prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * the numbers must be separated by a comma and a space
 * Return: Always o (successful)
*/

int main(void)
{
	int i;
	unsigned long term1 = 1;
	unsigned long term2 = 2;
	int n = 50;
	unsigned long nextterm = term1 + term2;

	printf("%lu, %lu, ", term1, term2);

	for (i = 1; i < (n - 1); i++)
	{
		printf("%lu, ", nextterm);
		term1 = term2;
		term2 = nextterm;
		nextterm = term1 + term2;

		if (i == (n - 1))
		{
			printf("\n");
		}
	}
	return (0);
}

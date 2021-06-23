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
	int term1 = 1;
	int term2 = 2;
	int n = 50;
	int nextterm = term1 + term2;

	printf("%d, %d, ", term1, term2);

	for (i = 1; i <= n; i++)
	{
		printf("%d, ", nextterm);
		term1 = term2;
		term2 = nextterm;
		nextterm = term1 + term2;
	}
	return (0);
}

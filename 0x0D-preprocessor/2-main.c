#include <stdio.h>

/**
 * main - program that prints the name of file
 * it was compiled from
 *
 * Return: 0 (successful)
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}

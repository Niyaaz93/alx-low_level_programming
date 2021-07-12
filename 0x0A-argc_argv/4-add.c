#include <stdio.h>
#include "holberton.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * num_check - checking if each argv in the array is a number
 * @argva: argv value
 *
 * Return: true only if the entire string are numbers, else returns false
 */
bool num_check(char *argva)
{
	int j = 0;

	for (j = 0; argva[j]; j++)
	{
		if (!(argva[j] >= '0' && argva[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - Program that adds positive numbers
 * @argc: argument count containing number of arguments passed to program
 * @argv: argument vector containing array of strings
 *
 * Return: o (successful)
 */

int main (int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (num_check(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}

		else
		{
			printf("Error\n");

			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

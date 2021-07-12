#include <stdio.h>
#include "holberton.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * num_check - checking if each argv in the array is a number
 * @argv: argv value
 *
 * Return: true only if the entire string are numbers, else returns false
 */

bool num_check(char *argv_a)
{
	int a = 0;

	for (a = 0; argv_a[a]; a++)
	{
		if (!(argv_a[a] >= 48 && argv_a[a] <= 57))
		{
			return (0);
		}
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

int main (int argc, char *argv)
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

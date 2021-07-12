#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: argument count containing number of arguments passed to program
 * @argv: argument vector containing array of strings
 *
 * Return: 0 (successful)
 */

int main (int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

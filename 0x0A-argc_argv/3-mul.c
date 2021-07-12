#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: argument counter containing number of arguments passed to program
 * @argv: argument vector containing an array of strings
 *
 * Return: 0 (successful), 1 (error)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);

		return (0);
	}
}

#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all arguments that is recieved by the program
 * @argc: argument count containing number of arguments passed into program
 * @argv: argument vector containing array of strings
 *
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

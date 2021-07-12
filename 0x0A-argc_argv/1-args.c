#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints number of arguments passed into program
 * @argc: argument count containing number of args passed to program
 * @argv: argument vector containing an array of strings
 *
 * Return: 0 (successful)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

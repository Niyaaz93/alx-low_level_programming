#include "holberton.h"

/**
 * _puts - prints a string followed by new line to stdout
 * @str: string to be printed
 *
 * Return: void (successful)
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

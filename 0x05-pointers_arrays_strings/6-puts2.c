#include "holberton.h"

/**
 * puts2 - prints every character of a string, starting with the 1st character
 * followed by a new line
 * @str: string accepted by function
 *
 * Return: void (successful)
 */
void puts2(char *str)
{
	int i;
	int strlen = 0;

	while (*(str + strlen) != '\0')
	{
		strlen++
	}

	for (i = 0; i <= strlen; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

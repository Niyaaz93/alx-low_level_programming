#include "holberton.h"

/**
 * puts_half - prints half the string followed by a newline
 * @str: string to be halved
 *
 * Return: void (successful)
 */
void puts_half(char *str)
{
	int i;
	int strlen = 0;
	int n;

	while (*(str + strlen) != '\0')
	{
		strlen++;
	}

	if ((strlen % 2) == 0)
	{
		n = strlen / 2;
		for (i = n; i < strlen; i++)
		{
			_putchar(*(str+i));
		}
	}
	else
	{
		n = (strlen - 1) / 2;
		for (i = n; i < strlen; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

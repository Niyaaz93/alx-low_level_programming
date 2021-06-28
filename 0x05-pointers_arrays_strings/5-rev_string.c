#include "holberton.h"

/**
 * _strlen - retuns the length of a string
 * @s: string who's length is to be determined
 *
 * Return: 0 (successful)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 *
 * Return: void (successful)
 */
void rev_string(char *s)
{
	int i;
	int strlen = 0;

	strlen = _strlen(s);

	for (i = (strlen - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

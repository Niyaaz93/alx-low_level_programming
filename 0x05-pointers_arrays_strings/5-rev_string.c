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
	int swap = 0;
	int newpos = 0;

	strlen = _strlen(s);

	if (strlen > 0)
	{
		for (i = 0; i < strlen; i++)
		{
			swap = *(s+i);
			newpos = (strlen - 1) - i;
			*(s + i) = *(s + newpos);
			*(s + newpos) = swap;
		}
	}
}

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

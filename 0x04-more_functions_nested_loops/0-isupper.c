#include "holberton.h"

/**
 * _isupper - function that prints whether a character is uppercase or not
 * Description: function that prints whether a character is uppercase or not
 * function returns 1 if uppercase and 0 otherwise
 * @c: character that is being checked
 * Return: 1 (successful) 0 (otherwise)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

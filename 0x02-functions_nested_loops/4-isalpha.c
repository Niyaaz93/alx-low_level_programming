#include "holberton.h"

/**
 * _isalpha: function that checks for alphabetic character
 * Description: the function checks for alphabetic character
 * and returns 1 if c is a letter, lowercase or uppercase
 * and returns 0 otherwise
 * @c: letter to be checked
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');
}

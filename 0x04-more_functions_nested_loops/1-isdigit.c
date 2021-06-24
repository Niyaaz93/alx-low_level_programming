#include "holberton.h"

/**
 * _isdigit - function that checks for a digit from 0 - 9
 * Description: function that checks for a digit between
 * 0 and 9
 * @c: character that is to be checked
 * Return: 1 (successful) 0 (otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

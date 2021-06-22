#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 * Description: Prints the absolute value of an integer
 * @a: integer that is converted to absolute value
* Return: absolute value of the integer
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}

	else
	{
		return (a * -1);
	}

	_putchar('\n');
}

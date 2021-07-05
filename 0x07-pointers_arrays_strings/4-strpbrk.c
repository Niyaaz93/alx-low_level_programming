#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be matched in the string
 *
 * Return: pointer (successful)
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s = s + a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}

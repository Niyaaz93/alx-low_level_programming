#include "holberton.h"

/**
 * int_strspn - function that gets length of a prefix substring
 * @s: string to be evaluated
 * @accept: substring that is search for in string
 *
 * Return: number of bytes in s which consist of bytes from accept (successful)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int length = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				length++;
			}

			j++;
		}

		i++;
	}

	return (length);
}

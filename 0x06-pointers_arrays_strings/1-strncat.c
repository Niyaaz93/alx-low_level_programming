#include "holberton.h"

/**
 * _strncat - concatenates two string
 * @dest: the string returned by the function
 * @src: the string that is appended to dest
 * @n: number of bytes taken from src
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lens = 0;
	int lend = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}

	while (src[lens] != src[n])
	{
		dest[lend] = src[lens];

		lend++;
		lens++
	}

	dest[lend] = '\0';

	return (dest);
}

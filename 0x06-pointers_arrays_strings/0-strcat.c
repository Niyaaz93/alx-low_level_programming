#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string returned by the function
 * @src: the string that is appended to dest
 *
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int lens = 0;
	int lend = 0;

	while (dest[lend] != '\0')
	{
		lend++;
	}

	while (src[lens] != '\0')
	{
		dest[lend] = src[lens];

		lend++;
		lens++
	}

	dest[lend] = '\0';

	return (dest);
}

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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

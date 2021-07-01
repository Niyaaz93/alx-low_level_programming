#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: the string returned by the function
 * @src: the string that is copied from
 * @n: number of characters copies from src
 *
 * Return: *char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	while (len < n)
	{
		dest[len] = '\0';

		len++;
	}

	return (dest);
}

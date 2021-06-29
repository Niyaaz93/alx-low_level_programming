#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to, to the buffer point
 * @dest: buffer point
 * @src: string to be copied
 *
 * Return: 0 (successful)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';
	return (dest);
}

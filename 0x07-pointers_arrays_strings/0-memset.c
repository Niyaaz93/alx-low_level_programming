#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area that is going to be altered
 * @b: constant byte to be set
 * @n: the n bytes of memory to be replaced
 *
 * Return: s (successful)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

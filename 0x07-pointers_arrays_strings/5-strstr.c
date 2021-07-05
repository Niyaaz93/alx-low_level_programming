#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched in the haystack string
 *
 * Return: pointer (successful)
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}

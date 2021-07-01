#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string accepted by function
 *
 * Return: char
 */
char *leet(char *str)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int len = 0;

	while (s1[len] != '\0')
	{
		len++;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}

	return (str);
}

#include "holberton.h"

/**
 * wildcmp - function that compares two strings
 * @s1: first string accepted by function
 * @s2: second string accepted by function
 *
 * Return: 1 for identical strings, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if ((*s1 == '\0' && *s2 != '\0') || (*s2 == '\0'))
	{
		return (0);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == 0 && *s2 != '*')
	{
		return (0);
	}
	else
	{
		return (wildcmp(s1, s2 + 1));
	}

	return (0);
}

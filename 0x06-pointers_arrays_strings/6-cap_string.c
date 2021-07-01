#include "holberton.h"

/**
 * cap_string - capitalises all words of a string
 * @str: string accepted by function
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& (str[i - 1] == 44 || str[i - 1] == 59
			    || str[i - 1] == 46 || str[i - 1] == 33
			    || str[i - 1] == 63 || str[i - 1] == 34
			    || str[i - 1] == 40 || str[i - 1] == 41
			    || str[i - 1] == 123 || str[i - 1] == 125
			    || str[i - 1] == 32 || str[i - 1] == '\n'
			    || str[i - 1] == '\t' || i == 0))
		{
			str[i] = str[i] - 97 + 65;
		}
		
		i++;
	}

	return (str);
}

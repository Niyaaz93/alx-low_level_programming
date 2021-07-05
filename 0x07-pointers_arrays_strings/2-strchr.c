/**
 * _strchr - function that locates a character in a string
 * @s: string to be evaluated
 * @c: character to be located
 *
 * Return: pointer to first occurence of c (successful)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s = s + i;
			return (s);
		}
	}

	return (NULL);
}

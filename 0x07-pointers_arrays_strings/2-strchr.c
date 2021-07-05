/**
 * _strchr - function that locates a character in a string
 * @s: string to be evaluated
 * @c: character to be located
 *
 * Return: pointer to first occurence of c (successful)
 */
char *_strchr(char *s, char c)
{
	int i;
	char *pntr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pntr = s + i;
		}

		else
		{
			pntr = 0;
		}
	}

	return (pntr);
}

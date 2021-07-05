/**
 * int_strspn - function that gets length of a prefix substring
 * @s: string to be evaluated
 * @accept: substring that is search for in string
 *
 * Return: number of bytes in s which consist of bytes from accept (successful)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int length;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
			if (accept[j] == '\0')
			{
				return (length);
			}
		}
	}

	return (length);
}

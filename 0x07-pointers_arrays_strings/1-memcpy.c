/**
 * _memcpy - function that copies memory area
 * @dest: memory area to which memory is copied
 * @src: memory area from which memory is copied
 * @n: bytes of memory copied
 *
 * Return: dest (successful)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	return (dest);
}

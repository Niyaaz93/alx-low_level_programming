/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area that is going to be altered
 * @b: constant byte to be set
 * @n: the n bytes of memory to be replaced
 *
 * Return: s (successful)
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - function that copies memory area
 * @dest: memory area to which memory is copied
 * @src: memory area from which memory is copied
 * @n: bytes of memory copied
 *
 * Return: dest (successful)
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function that locates a character in a string
 * @s: string to be evaluated
 * @c: character to be located
 *
 * Return: pointer to first occurence of c (successful)
 */
char *_strchr(char *s, char c);

/**
 * int_strspn - function that gets length of a prefix substring
 * @s: string to be evaluated
 * @accept: substring that is search for in string
 *
 * Return: number of bytes in s which consist of bytes from accept (successful)
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be matched in the string
 *
 * Return: pointer (successful)
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be searched in the haystack string
 *
 * Return: pointer (successful)
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - function that prints a chessboard
 * @a: array for printing chessboard
 *
 * Return: void (successful)
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array representing square matrix
 * @size: matrix size
 *
 * Return: void (successful)
 */
void print_diagsums(int *a, int size);

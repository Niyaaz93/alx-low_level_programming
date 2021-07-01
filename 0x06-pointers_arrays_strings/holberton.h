/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * _strcat - concatenates two strings
 * @dest: the string returned by the function
 * @src: the string that is appended to dest
 *
 * Return: dest string
 */
char *_strcat(char *dest, char *src);


/**
 * _strncat - concatenates two string
 * @dest: the string returned by the function
 * @src: the string that is appended to dest
 * @n: number of bytes taken from src
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n);


/**
 * _strncpy - copies a string
 * @dest: the string returned by the function
 * @src: the string that is copied from
 * @n: number of characters copies from src
 *
 * Return: *char
 */
char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2);


/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void (successful)
 */
void reverse_array(int *a, int n);


/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string accepted by function
 *
 * Return: char
 */
char *string_toupper(char *);


/**
 * cap_string - capitalises all words of a string
 * @str: string accepted by function
 *
 * Return: char
 */
char *cap_string(char *);


/**
 * leet - encodes a string into 1337
 * @str: string accepted by function
 *
 * Return: char
 */
char *leet(char *);

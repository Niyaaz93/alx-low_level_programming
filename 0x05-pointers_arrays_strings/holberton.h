/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * reset_to_98 - updates the value of the paramter to 98
 * @n - the pointer accepted by the function
 *
 * Return: void (successful)
 */
void reset_to_98(int *n);


/**
 * swap_int - swaps the valus of 2 integers
 * @a - first integer to be swapped
 * @b - second integer to be swapped
 *
 * Return: void (successful)
 */
void swap_int(int *a, int *b);


/**
 * _strlen - retuns the length of a string
 * @s: string who's length is to be determined
 *
 * Return: 0 (successful)
 */
int _strlen(char *s);


/**
 * _puts - prints a string followed by new line to stdout
 * @str: string to be printed
 *
 * Return: void (successful)
 */
void _puts(char *str);


/**
 * print_rev - prints string in reverse followed by newline
 * @s: string to be reversed
 *
 * Return: void (successful)
 */
void print_rev(char *s);


/**
 * rev_string - reverses the string
 * @s - string to be reversed
 *
 * Return: void (successful)
 */
void rev_string(char *s);


/**
 * puts2 - prints every character of a string, starting with the 1st character
 * followed by a new line
 * @str: string accepted by function
 *
 * Return: void (successful)
 */
void puts2(char *str);


/**
 * puts_half - prints half the string followed by a newline
 * @str: string to be halved
 *
 * Return: void (successful)
 */
void puts_half(char *str);


/**
 * print_array - prints n integers of an array
 * @a - pointer that points to array
 * @n - number of elements to print
 *
 * Return: void (successful)
 */
void print_array(int *a, int n);


/**
 * *_strcpy - copies the string pointed to, to the buffer point
 * @dest - buffer point
 * @src - string to be copied
 *
 * Return: 0 (successful)
 */
char *_strcpy(char *dest, char *src);

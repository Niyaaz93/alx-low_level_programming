/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);


/**
 * _puts_recursion - function that prints a string
 * followed by a new line
 * @s: string accepted by function
 *
 * Return: 0 on success
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: string accpeted by function
 *
 * Return: 0 on sucsess
 */
void _print_rev_recursion(char *s);


/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string accepted by function
 *
 * Return: 0 on success
 */
int _strlen_recursion(char *s);


/**
 * factorial - function that returns factorial of a number
 * @n: number accepted by function
 *
 * Return: 0 on success, -1 on error
 */
int factorial(int n);


/**
 * _pow_recursion - function that returns x to power of y
 * @x: number to be raised to a power
 * @y: power that number is raised to
 *
 * Return: 0 on success, -1 on error
 */
int _pow_recursion(int x, int y);


/**
 * _sqrt_recursion - function that return natural sqrt of a number
 * @n: number accpeted by function
 *
 * Return: 0 on success, -1 on error
 */
int _sqrt_recursion(int n);


/**
 * is_prime_number - function that returns 1 for prime numbers
 * and 0 otherwise
 * @n: number accepted by function
 *
 * Return: 1 for prime number, 0 otherwise
 */
int is_prime_number(int n);


/**
 * is_palindrome - function that returns 1 for palindromes
 * and 0 if not
 * @s: string accepted by function
 *
 * Return: 1 for palindrome, 0 if not
 */
int is_palindrome(char *s);


/**
 * wildcmp - function that compares two strings
 * @s1: first string accepted by function
 * @s2: second string accepted by function
 *
 * Return: 1 for identical strings, 0 otherwise
 */
int wildcmp(char *s1, char *s2);

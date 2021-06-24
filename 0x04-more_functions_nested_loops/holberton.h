/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * Function to check for uppercase characters
 */
int _isupper(int c);

/**
 * Function that checks for a digit, from 0 through 9
 */
int _isdigit(int c);

/**
 * Function that multiplies two integers
 */
int mul(int a, int b);

/**
 * Function that prints the numbers from 0 to 9 followed by a newline
 */
void print_numbers(void);

/**
 * Function that prints the numbers from 0 to 9 followed by a newline
 * but do not print 2 and 4
 */
void print_most_numbers(void);

/**
 * Function that prints 10 times the numbers from 0 to 14 followed by a newline
 */
void more_numbers(void);

/**
 * Function that draws a straight line in the terminal
 */
void print_line(int n);

/**
 * Function that draws a diagonal line on the terminal
 */
void print_diagonal(int n);

/**
 * Function that prints a square followed by a newline
 */
void print_square(int size);

/**
 * Functions that prints a triangle followed by a newline
 */
void print_triangle(int size);

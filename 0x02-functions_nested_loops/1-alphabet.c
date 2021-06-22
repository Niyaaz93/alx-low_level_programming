#include "holberton.h"

/**
 * Description - printing all lower case
 * letters of the alphabet using ASCII values
 *
 * Return: Always 0 (successful)
 */

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}

_putchar('\n');
}

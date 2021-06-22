#include "holberton.h"

/**
 * print_alphabet_x10 - printing all lower case
 * letters of the alphabet ten times using ASCII values
 *
 * Return: void (successful)
 */

void print_alphabet_x10(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{

for (i = 97; i < 123; i++)
{
_putchar(i);
}

_putchar('\n');
}

}

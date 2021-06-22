#include "holberton.h"

/**
 * main - entry point into the function
 * Description - prints the work Holberton using
 * the _putchar function provided
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
int i;
char string[] = "Holberton";

for (i = 0; i < 9; i++)
{
_putchar(string[i]);
}

_putchar("\n");

return (0);
}

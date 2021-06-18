#include <stdio.h>

/**
 * main- entry into the function
 * Description: prints all numbers of
 * base16 in lowercase
 * Return: Always 0 (successful)
 */

int main(void)
{
char num;
char letter;

for (num = 0; num < 10; num++)
{
putchar(num % 10 + '0');
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}

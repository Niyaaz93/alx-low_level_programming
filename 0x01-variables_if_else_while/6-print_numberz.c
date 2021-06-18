#include <stdio.h>

/**
 * main - entry point into the function
 * Description: prints all single digit
 * numbers of base 10
 * Return: always 0 (successful)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num % 10);
}
putchar('\n');

return (0);
}

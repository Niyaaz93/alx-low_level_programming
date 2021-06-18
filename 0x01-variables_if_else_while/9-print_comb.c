#include <stdio.h>

/**
 * main - entry into the function
 * Description: prints all combinations
 * of single digit numbers and numbers
 * are separated by commas
 * Return: Always 0 (successful)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num % 10 + '0');
putchar(',');
}

return (0);
}

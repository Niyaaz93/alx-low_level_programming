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

for (num = 0; num <= 9; num++)
{
putchar(num % 10 + '0');

if (num == 9)
{
break;
}

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - entry point to the function
 * Description: print out all single digit
 * numbers of base 10 starting from 0.
 * Return: Always 0 (successful)
 */

int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}

putchar('\n');

return (0);
}

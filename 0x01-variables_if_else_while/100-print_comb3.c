#include <stdio.h>

/**
 * main - entry into the function
 * Description: prints all possible combinations
 * of 2 digit numbers
 * Return: Always 0 (successful)
 */

int main(void)
{
int first;
int second;

for (second = 0; second <= 9; second++)
{
for (first = second + 1; first <= 9; first++)
{
putchar(second + '0');
putchar(first + '0');

if (second == 8 && first == 9)
{
continue;
}
putchar(',');
putchar(' ');
}

}

putchar('\n');
return (0);
}

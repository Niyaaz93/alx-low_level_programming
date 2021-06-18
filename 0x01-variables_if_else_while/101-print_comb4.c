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
int third;

for (third = 0; third <=9; third++)
{
for (second = third + 1; second <= 9; second++)
{
for (first = second + 1; first <= 9; first++)
{
putchar(third + '0');
putchar(second + '0');
putchar(first + '0');

if (third == 7 && second == 8 && first == 9)
{
continue;
}
putchar(',');
putchar(' ');
}

}
}
putchar('\n');
return (0);
}

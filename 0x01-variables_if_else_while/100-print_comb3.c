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

for (first = 0; first <= 9; first++)
{
for (second = first + 1; second <= 9; second++)
{
  putchar(second + '0');
  putchar(first + '0');

if (second == 8 && first == 9)
{
continue;
}
putchar(',');
putchat(' ');
}

}

putchar('\n');
return (0);
}

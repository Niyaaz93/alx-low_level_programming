#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point
 * Description: using if and else conditional statements to test a few comparison statements
 * Return: always 0 (successful)
 */

int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if(n > 0)
    printf("%d is positive\n", n);
  else if(n == 0)
    printf("%d is zero\n", n);
  else(n < 0)
    printf("%d is negative\n", c);

  return (0);
}

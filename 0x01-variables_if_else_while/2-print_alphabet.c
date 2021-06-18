#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point to the function
 * Description: print the alphabet in lowercase
 * followed by a new line
 * Return: always 0 (successful)
 */

int main(void)
{
  char[] alpha = new char[26];

  for(int i = 0; i < 26; i++)
      {
      alpha[i] = (char)(65 + i)
      }
  
  putchar(alpha[i])
return (0);
}

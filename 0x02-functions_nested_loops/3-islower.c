#include "holberton.h"

/**
 * islower - checks for lowercase characters
 * Description: function checks for lowercase characters
 * and returns 1 if c character is lowercase
 * and returns 0 otherwise
 * Return: 1 if c is lowercase, or 0 otherwise
 */

int _islower(int c)
{
  
  if (c >= 97 && c <= 122)
    {
      return (1);
    }
  else
    {
      return (0);
    }
  _putchar('n');
}

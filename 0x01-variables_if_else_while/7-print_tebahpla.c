#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point to the function
 * Description: print the alphabet in lowercase
 * and in reverse
 * followed by a new line
 * Return: always 0 (successful)
 */

int main(void)
{
int i;
char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		    'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
		     'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

for (i = 25; i >= 0; i--)
{
putchar(letters[i]);
}

putchar('\n');

return (0);
}

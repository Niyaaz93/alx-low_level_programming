#include <stdio.h>
/**
 * main- it is the entry point
 * print out the sizes of:
 * char
 * int
 * long int
 * long long int
 * float
 * on both 32 and 64 bit system
 * Return: always 0 (successful)
 */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));

return (0);
}

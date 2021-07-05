# Project 0x07 Pointers, Arrays, and Strings

### General Requirements
<hr>

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
  std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but
  you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c
  files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your heade
  file called holberton.h
* Don’t forget to push your header file

<hr>

### Project Tasks
0. Write a function that fills memory with a constant byte.
* Prototype: char *_memset(char *s, char b, unsigned int n);
* The _memset() function fills the first n bytes of the memory area pointed to
  by s with the constant byte b
* Returns a pointer to the memory area s
* FYI: The standard library provides a similar function: memset. Run man memset
  to learn more.

1. Write a function that copies memory area.
* Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
* The _memcpy() function copies n bytes from memory area src to memory area dest
* Returns a pointer to dest
* FYI: The standard library provides a similar function: memcpy. Run man memcpy
  to learn more.

2. Write a function that locates a character in a string.
* Prototype: char *_strchr(char *s, char c);
* Returns a pointer to the first occurrence of the character c in the string s,
  or NULL if the character is not found
* FYI: The standard library provides a similar function: strchr. Run man strchr
  to learn more.

3. Write a function that gets the length of a prefix substring.
* Prototype: unsigned int _strspn(char *s, char *accept);
* Returns the number of bytes in the initial segment of s which consist only of
  bytes from accept
* FYI: The standard library provides a similar function: strspn. Run man strspn
  to learn more.

4. Write a function that searches a string for any of a set of bytes.
* Prototype: char *_strpbrk(char *s, char *accept);
* The _strpbrk() function locates the first occurrence in the string s of any of
  the bytes in the string accept
* Returns a pointer to the byte in s that matches one of the bytes in accept, or
  NULL if no such byte is found
* FYI: The standard library provides a similar function: strpbrk. Run man
  strpbrk to learn more.

5. Write a function that locates a substring.
* Prototype: char *_strstr(char *haystack, char *needle);
* The _strstr() function finds the first occurrence of the substring needle in
  the string haystack. The terminating null bytes (\0) are not compared
* Returns a pointer to the beginning of the located substring, or NULL if the
  substring is not found.
* FYI: The standard library provides a similar function: strstr. Run man strstr
  to learn more.

6. Write a function that prints the chessboard.
* Prototype: void print_chessboard(char (*a)[8]);

7. Write a function that prints the sum of the two diagonals of a square matrix
   of integers.
* Prototype: void print_diagsums(int *a, int size);
* Format: see example
```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
  *
   * Return: Always 0.
    */
    int main(void)
    {
        int c3[3][3] = {
	        {0, 1, 5},
		        {10, 11, 12},
			        {1000, 101, 102},
				    };
				        int c5[5][5] = {
					        {0, 1, 5, 12124, 1234},
						        {10, 11, 12, 123521, 12512},
							        {1000, 101, 102, 12545, 214543435},
								        {100, 1012451, 11102, 12545, 214543435},
									        {10, 12401, 10452, 11542545, 1214543435},
										    };
										        print_diagsums((int *)c3, 3);
											    print_diagsums((int *)c5, 5);
											        return (0);
												}
												julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
												julien@ubuntu:~/0x07$ ./8-print_diagsums
												113, 1016
												1214556093, 1137318
												julien@ubuntu:~/0x07$ 
```
* You are allowed to use the standard library
* Note that in the following example we are casting an int[][] into an int*.
  This is not something you should do. The goal here is to make sure you
  understand how an array of array is stored in memory.
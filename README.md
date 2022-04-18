# printf

## General information
The _printf function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. It includes the conversion specifiers : c, s, %, d, x, X, u, o, rot13 and i.

 Example
#include "holberton.h"
_printf("The %s jumped %d times! -%c", "dog", 7, 'C');
output : The dog jumped 7 times! -C

## Project Requirements
All files will be compiled on Ubuntu 14.04 LTS
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
Your code should use the Betty style
You are not allowed to use global variables
Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Custom printf function


## Files  and  Functions

**_putchar.c:** 

* int _putchar(char c) - function to print char

**_strlen.c:** 

* int _strlen(char *string) - gets string length

**get_bin.c:**

* int _bin(va_list bin) - function to print binary

**get_char.c:** 

* int ch(va_list character) -  function to return char

**get_hex.c:**

* int _hex_str(unsigned int n, unsigned int hex, char alpha) -  converts the number from base 10 to hex

**get_int.c:** 

* int _int(va_list integ) - function to print integers

**get_oct.c:** 

* int _oct(va_list octo) -  function to print octal

**get_rot13.c:** 

* int _rot13(va_list rot) - prints rot13 version

**get_str.c:** 

* int str(va_list *s) - prints string to stdout

**get_unsigned.c:** 

* int _ui(va_list unsign) -  unsigned int print to stdout

### main.h: header file

### Files and  Function
#### man_3_printf: _printf man page

* printf.c:  main custom _printf function

* int print_op(const char *format, fmt_t *print_arr, va_list list) - | function to check which specifier to print
* int _printf(const char *format, ...) | - prints output according to format
#### Notes
* Our program does not handle buffer handling, flag characters, field width, precision, or length modifiers.

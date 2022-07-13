#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define NULL ((void *)0)

int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(char *string);
int _print_int(long int var);
int _printf(const char *format, ...);
int to_Binary(unsigned int n);
int to_Octal(unsigned int n);
int _power_recursion(int x, int y);
int to_Hexa(unsigned int num);

/**
 * struct func - Struct for specifier to poiter
 * @sc: The specifiers
 * @f: The function associated
 * @f: function to handle printing
 * @t: character to compare
 */

typedef struct func
{
	char *sc;
	char *t;
	int (*f)(va_list);
} fun_t;

int print_char(va_list);
int print(va_list);
int print_cent(va_list);

#endif

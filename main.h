#ifndef MAIN_H
#define MAIN_H

#include <stdarg>
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
 * struct code_format - Struct format
 * @sc: The specifiers
 * @f: The function associated
 */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
